#ifndef __COMMUNICATION_SERVICE_H
#define __COMMUNICATION_SERVICE_H

#include "protocol_config.h"
#include "protocol_types.h"
#include "frame_decoder.h"

typedef struct
{
    PacketDecoder_t decoder;
    uint16_t lastIndex;
    ProtocolPacket_t currentPacket;
} CommunicationContext_t;

/**
 * @brief Initializes parser contexts and queues.
 */
void CommunicationService_Init(void);

/**
 * @brief Reads incoming bytes from UartDriver and parses structures.
 */
void CommunicationService_ProcessRx(void);

/**
 * @brief Pulls parsed frames from queue and executes dispatch commands.
 */
void CommunicationService_ProcessQueue(void);

/**
 * @brief Builds and sends response packets out USART1 link.
 */
void CommunicationService_SendPacket(const ProtocolPacket_t *pPacket);

#endif /* __COMMUNICATION_SERVICE_H */
