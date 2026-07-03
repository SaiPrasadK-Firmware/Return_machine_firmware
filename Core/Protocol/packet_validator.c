/**
 * @file packet_validator.c
 * @brief Packet validator implementation.
 */

#include "packet_validator.h"
#include "crc16.h"
#include <stddef.h>

bool Packet_VerifyCRC(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return false;
    }

    uint16_t expected_crc = ((uint16_t)pPacket->header.crcHigh << 8) | pPacket->header.crcLow;

    // Buffer for calculations: Bytes 4 (Command) onwards to end of payload
    // Header size (8 bytes) minus CRC position offset (4 bytes) = 4 bytes of header to compute
    uint8_t crc_header[4];
    crc_header[0] = pPacket->header.command;
    crc_header[1] = pPacket->header.control;
    crc_header[2] = (uint8_t)(pPacket->header.payloadLen & 0xFF);
    crc_header[3] = (uint8_t)((pPacket->header.payloadLen >> 8) & 0xFF);

    uint16_t computed_crc = 0xFFFF;

    // Run CRC on Command, Control, and Length fields
    for (uint16_t i = 0; i < 4; i++)
    {
        computed_crc ^= crc_header[i];
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

    // Run CRC on payload bytes
    for (uint16_t i = 0; i < pPacket->header.payloadLen; i++)
    {
        computed_crc ^= pPacket->payload[i];
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

    return (computed_crc == expected_crc);
}

PacketResult_t Packet_Validate(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return PACKET_INVALID_HEADER;
    }

    if (pPacket->header.header1 != PROTOCOL_START_BYTE1 || pPacket->header.header2 != PROTOCOL_START_BYTE2)
    {
        return PACKET_INVALID_HEADER;
    }

    if (pPacket->header.payloadLen > PROTOCOL_MAX_PAYLOAD_SIZE)
    {
        return PACKET_INVALID_LENGTH;
    }

    if (!Packet_VerifyCRC(pPacket))
    {
        return PACKET_INVALID_CRC;
    }

    return PACKET_OK;
}
