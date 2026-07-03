/**
 * @file packet_builder.c
 * @brief Packet builder implementation.
 */

#include "packet_builder.h"
#include "crc16.h"
#include <string.h>

uint16_t Packet_Build(const ProtocolPacket_t *pPacket, uint8_t *pDestBuffer, uint16_t maxDestLen)
{
    if (pPacket == NULL || pDestBuffer == NULL)
    {
        return 0;
    }

    uint16_t packet_size = PROTOCOL_HEADER_SIZE + pPacket->header.payloadLen;
    if (packet_size > maxDestLen || pPacket->header.payloadLen > PROTOCOL_MAX_PAYLOAD_SIZE)
    {
        return 0;
    }

    // Serialize Header (leaving CRC space to fill later)
    pDestBuffer[0] = PROTOCOL_START_BYTE1;
    pDestBuffer[1] = PROTOCOL_START_BYTE2;
    // bytes 2 and 3 are for CRC
    pDestBuffer[4] = pPacket->header.command;
    pDestBuffer[5] = pPacket->header.control;
    pDestBuffer[6] = (uint8_t)(pPacket->header.payloadLen & 0xFF);
    pDestBuffer[7] = (uint8_t)((pPacket->header.payloadLen >> 8) & 0xFF);

    // Serialize Payload
    if (pPacket->header.payloadLen > 0)
    {
        memcpy(&pDestBuffer[PROTOCOL_HEADER_SIZE], pPacket->payload, pPacket->header.payloadLen);
    }

    // Compute CRC over Command, Control, Length, and Payload (bytes 4 to end)
    uint16_t computed_crc = 0xFFFF;
    uint16_t crc_range = packet_size - 4; // Skip first 4 bytes (header1, header2, crcHigh, crcLow)
    
    for (uint16_t i = 0; i < crc_range; i++)
    {
        computed_crc ^= pDestBuffer[4 + i];
        for (uint8_t bit = 0; bit < 8; bit++)
        {
            if (computed_crc & 0x0001)
            {
                computed_crc = (computed_crc >> 1) ^ 0xA001;
            }
            else
            {
                computed_crc >>= 1;
            }
        }
    }

    // Write CRC in Big Endian format to bytes 2-3
    pDestBuffer[2] = (uint8_t)((computed_crc >> 8) & 0xFF);
    pDestBuffer[3] = (uint8_t)(computed_crc & 0xFF);

    return packet_size;
}
