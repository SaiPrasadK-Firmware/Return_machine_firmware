/**
 * @file frame_decoder.c
 * @brief Packet frame decoder implementation.
 */

#include "frame_decoder.h"
#include "packet_validator.h"
#include <string.h>

void FrameDecoder_Init(PacketDecoder_t *pDecoder)
{
    if (pDecoder == NULL)
    {
        return;
    }
    memset(pDecoder, 0, sizeof(PacketDecoder_t));
    pDecoder->state = DECODER_STATE_WAIT_HEADER1;
}

void FrameDecoder_Reset(PacketDecoder_t *pDecoder)
{
    if (pDecoder == NULL)
    {
        return;
    }
    pDecoder->state = DECODER_STATE_WAIT_HEADER1;
    pDecoder->bufferIndex = 0;
    pDecoder->expectedPayloadLen = 0;
}

void FrameDecoder_ProcessTimeout(PacketDecoder_t *pDecoder)
{
    if (pDecoder == NULL)
    {
        return;
    }
    if (pDecoder->state != DECODER_STATE_WAIT_HEADER1 && pDecoder->state != DECODER_STATE_PACKET_READY)
    {
        pDecoder->timeouts++;
        FrameDecoder_Reset(pDecoder);
    }
}

PacketResult_t FrameDecoder_InputByte(PacketDecoder_t *pDecoder, uint8_t byte)
{
    if (pDecoder == NULL)
    {
        return PACKET_INVALID_HEADER;
    }

    if (pDecoder->state == DECODER_STATE_PACKET_READY)
    {
        // Automatically reset if new byte arrives after a packet was completed
        FrameDecoder_Reset(pDecoder);
    }

    // Protect buffer boundaries
    if (pDecoder->bufferIndex >= PROTOCOL_MAX_PACKET_SIZE)
    {
        pDecoder->bufferOverflows++;
        FrameDecoder_Reset(pDecoder);
        // Fallthrough to process byte in clean state
    }

    pDecoder->packetBuffer[pDecoder->bufferIndex++] = byte;

    switch (pDecoder->state)
    {
        case DECODER_STATE_WAIT_HEADER1:
            if (byte == PROTOCOL_START_BYTE1)
            {
                pDecoder->state = DECODER_STATE_WAIT_HEADER2;
            }
            else
            {
                pDecoder->headerErrors++;
                pDecoder->bufferIndex = 0; // Reset index to stay in header search
            }
            break;

        case DECODER_STATE_WAIT_HEADER2:
            if (byte == PROTOCOL_START_BYTE2)
            {
                pDecoder->state = DECODER_STATE_WAIT_CRC_H;
            }
            else
            {
                pDecoder->headerErrors++;
                FrameDecoder_Reset(pDecoder);
                // Re-evaluate if this byte could be start byte 1
                if (byte == PROTOCOL_START_BYTE1)
                {
                    pDecoder->packetBuffer[0] = byte;
                    pDecoder->bufferIndex = 1;
                    pDecoder->state = DECODER_STATE_WAIT_HEADER2;
                }
            }
            break;

        case DECODER_STATE_WAIT_CRC_H:
            pDecoder->state = DECODER_STATE_WAIT_CRC_L;
            break;

        case DECODER_STATE_WAIT_CRC_L:
            pDecoder->state = DECODER_STATE_WAIT_CMD;
            break;

        case DECODER_STATE_WAIT_CMD:
            pDecoder->state = DECODER_STATE_WAIT_CONTROL;
            break;

        case DECODER_STATE_WAIT_CONTROL:
            pDecoder->state = DECODER_STATE_WAIT_LEN_L;
            break;

        case DECODER_STATE_WAIT_LEN_L:
            pDecoder->state = DECODER_STATE_WAIT_LEN_H;
            break;

        case DECODER_STATE_WAIT_LEN_H:
            // Extract length (Little Endian bytes 6 and 7)
            pDecoder->expectedPayloadLen = ((uint16_t)pDecoder->packetBuffer[7] << 8) | pDecoder->packetBuffer[6];
            if (pDecoder->expectedPayloadLen > PROTOCOL_MAX_PAYLOAD_SIZE)
            {
                pDecoder->lengthErrors++;
                FrameDecoder_Reset(pDecoder);
                return PACKET_INVALID_LENGTH;
            }

            if (pDecoder->expectedPayloadLen == 0)
            {
                // Zero-length payload, packet is fully assembled
                pDecoder->state = DECODER_STATE_PACKET_READY;
                pDecoder->packetsReceived++;
                return PACKET_OK;
            }
            pDecoder->state = DECODER_STATE_WAIT_PAYLOAD;
            break;

        case DECODER_STATE_WAIT_PAYLOAD:
            {
                uint16_t payload_bytes_received = pDecoder->bufferIndex - PROTOCOL_HEADER_SIZE;
                if (payload_bytes_received >= pDecoder->expectedPayloadLen)
                {
                    pDecoder->state = DECODER_STATE_PACKET_READY;
                    pDecoder->packetsReceived++;
                    return PACKET_OK;
                }
            }
            break;

        default:
            FrameDecoder_Reset(pDecoder);
            break;
    }

    return PACKET_INCOMPLETE;
}

PacketResult_t FrameDecoder_InputBuffer(PacketDecoder_t *pDecoder, const uint8_t *pBuffer, uint16_t length)
{
    if (pDecoder == NULL || pBuffer == NULL)
    {
        return PACKET_INVALID_HEADER;
    }

    PacketResult_t result = PACKET_INCOMPLETE;
    for (uint16_t i = 0; i < length; i++)
    {
        result = FrameDecoder_InputByte(pDecoder, pBuffer[i]);
        if (result == PACKET_OK)
        {
            // Stop early if a packet is completed to let caller retrieve it
            return PACKET_OK;
        }
    }
    return result;
}

PacketResult_t FrameDecoder_GetFrame(PacketDecoder_t *pDecoder, ProtocolPacket_t *pOutPacket)
{
    if (pDecoder == NULL || pOutPacket == NULL)
    {
        return PACKET_INVALID_HEADER;
    }

    if (pDecoder->state != DECODER_STATE_PACKET_READY)
    {
        return PACKET_INCOMPLETE;
    }

    // Deserialization logic (does not directly cast raw UART buffers)
    pOutPacket->header.header1 = pDecoder->packetBuffer[0];
    pOutPacket->header.header2 = pDecoder->packetBuffer[1];
    pOutPacket->header.crcHigh = pDecoder->packetBuffer[2];
    pOutPacket->header.crcLow  = pDecoder->packetBuffer[3];
    pOutPacket->header.command = pDecoder->packetBuffer[4];
    pOutPacket->header.control = pDecoder->packetBuffer[5];
    pOutPacket->header.payloadLen = ((uint16_t)pDecoder->packetBuffer[7] << 8) | pDecoder->packetBuffer[6];

    if (pOutPacket->header.payloadLen > 0)
    {
        memcpy(pOutPacket->payload, &pDecoder->packetBuffer[PROTOCOL_HEADER_SIZE], pOutPacket->header.payloadLen);
    }

    // Validate the decoded packet payload limits and checksum verify
    PacketResult_t result = Packet_Validate(pOutPacket);
    if (result != PACKET_OK)
    {
        if (result == PACKET_INVALID_CRC)
        {
            pDecoder->crcErrors++;
        }
        FrameDecoder_Reset(pDecoder);
        return result;
    }

    // Clear state for next packet
    FrameDecoder_Reset(pDecoder);
    return PACKET_OK;
}
