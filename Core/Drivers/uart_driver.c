#include "uart_driver.h"
#include "main.h"

extern UART_HandleTypeDef huart1;
extern DMA_HandleTypeDef hdma_usart1_rx;

static uint8_t g_uartRxBuffer[UART1_RX_BUFFER_SIZE];

void UartDriver_Init(void)
{
    // Hardware configuration already handled by MX_USART1_UART_Init in main.c
}

void UartDriver_StartReception(void)
{
    HAL_UART_Receive_DMA(&huart1, g_uartRxBuffer, UART1_RX_BUFFER_SIZE);
}

uint16_t UartDriver_GetWriteIndex(void)
{
    // CNDTR counts down from buffer size to 0
    uint32_t cndtr = __HAL_DMA_GET_COUNTER(&hdma_usart1_rx);
    if (cndtr > UART1_RX_BUFFER_SIZE)
    {
        return 0;
    }
    return (uint16_t)(UART1_RX_BUFFER_SIZE - cndtr);
}

const uint8_t* UartDriver_GetRxBuffer(void)
{
    return g_uartRxBuffer;
}

void UartDriver_Transmit(const uint8_t *pData, uint16_t length)
{
    if (pData == NULL || length == 0) return;
    
    // Transmit in blocking mode or DMA mode. Blocking mode used for safe debug bring-up.
    HAL_UART_Transmit(&huart1, (uint8_t*)pData, length, 100);
}

void UartDriver_HandleError(void)
{
    // Handle error flags, disable/re-enable DMA to clear flags
    HAL_UART_DMAStop(&huart1);
    UartDriver_StartReception();
}
