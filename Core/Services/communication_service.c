#include "communication_service.h"
#include "uart_driver.h"
#include "command_dispatcher.h"
#include "packet_builder.h"
#include "cmsis_os2.h"
#include <stddef.h>

// Mock print format macro for debug console output simulation
#define LOG_PACKET(dir, pPack) UartDriver_Transmit((const uint8_t*)"[UART LOG]", 10)

#define CMD_QUEUE_LEN 8

static CommunicationContext_t g_commContext;
static osMessageQueueId_t g_commandQueueHandle = NULL;

void CommunicationService_Init(void)
{
    FrameDecoder_Init(&g_commContext.decoder);
    g_commContext.lastIndex = 0;

    // Create RTOS message queue for deferred processing
    g_commandQueueHandle = osMessageQueueNew(CMD_QUEUE_LEN, sizeof(ProtocolPacket_t), NULL);

    UartDriver_Init();
    UartDriver_StartReception();
}

void CommunicationService_ProcessRx(void)
{
    uint16_t current_index = UartDriver_GetWriteIndex();
    const uint8_t *rx_buf = UartDriver_GetRxBuffer();

    if (current_index == g_commContext.lastIndex)
    {
        return;
    }

    while (g_commContext.lastIndex != current_index)
    {
        uint8_t byte = rx_buf[g_commContext.lastIndex];
        
        PacketResult_t res = FrameDecoder_InputByte(&g_commContext.decoder, byte);
        if (res == PACKET_OK)
        {
            if (FrameDecoder_GetFrame(&g_commContext.decoder, &g_commContext.currentPacket) == PACKET_OK)
            {
                LOG_PACKET("RX", &g_commContext.currentPacket);
                // Queue the parsed packet for thread execution
                osMessageQueuePut(g_commandQueueHandle, &g_commContext.currentPacket, 0U, 0U);
            }
        }
        g_commContext.lastIndex = (g_commContext.lastIndex + 1) % UART1_RX_BUFFER_SIZE;
    }
}

void CommunicationService_ProcessQueue(void)
{
    if (g_commandQueueHandle == NULL) return;

    ProtocolPacket_t queued_packet;
    // Poll queue with low-latency block
    if (osMessageQueueGet(g_commandQueueHandle, &queued_packet, NULL, 1U) == osOK)
    {
        CommandDispatcher_Process(&queued_packet);
    }
}

void CommunicationService_SendPacket(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL) return;

    LOG_PACKET("TX", pPacket);

    uint8_t tx_buffer[PROTOCOL_MAX_PACKET_SIZE];
    uint16_t tx_len = Packet_Build(pPacket, tx_buffer, sizeof(tx_buffer));

    if (tx_len > 0)
    {
        UartDriver_Transmit(tx_buffer, tx_len);
    }
}

