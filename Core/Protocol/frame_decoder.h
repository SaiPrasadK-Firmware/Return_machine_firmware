/**
 * @file frame_decoder.h
 * @brief Asynchronous byte stream packet decoder state machine.
 */

#ifndef __FRAME_DECODER_H
#define __FRAME_DECODER_H

#include "protocol_config.h"
#include "protocol_types.h"

typedef enum
{
    DECODER_STATE_WAIT_HEADER1,
    DECODER_STATE_WAIT_HEADER2,
    DECODER_STATE_WAIT_CRC_H,
    DECODER_STATE_WAIT_CRC_L,
    DECODER_STATE_WAIT_CMD,
    DECODER_STATE_WAIT_CONTROL,
    DECODER_STATE_WAIT_LEN_L,
    DECODER_STATE_WAIT_LEN_H,
    DECODER_STATE_WAIT_PAYLOAD,
    DECODER_STATE_PACKET_READY
} DecoderState_t;

typedef struct
{
    DecoderState_t state;
    uint8_t packetBuffer[PROTOCOL_MAX_PACKET_SIZE];
    uint16_t bufferIndex;
    uint16_t expectedPayloadLen;

    // Diagnostics Statistics
    uint32_t packetsReceived;
    uint32_t crcErrors;
    uint32_t headerErrors;
    uint32_t lengthErrors;
    uint32_t bufferOverflows;
    uint32_t timeouts;
} PacketDecoder_t;

/**
 * @brief Initializes the packet decoder structure.
 * @param pDecoder Pointer to decoder context.
 */
void FrameDecoder_Init(PacketDecoder_t *pDecoder);

/**
 * @brief Resets the packet decoder state machine.
 * @param pDecoder Pointer to decoder context.
 */
void FrameDecoder_Reset(PacketDecoder_t *pDecoder);

/**
 * @brief Processes a timeout event (resets parser state machine).
 * @param pDecoder Pointer to decoder context.
 */
void FrameDecoder_ProcessTimeout(PacketDecoder_t *pDecoder);

/**
 * @brief Feeds a single byte into the decoder state machine.
 * @param pDecoder Pointer to decoder context.
 * @param byte Input byte from stream.
 * @return PacketResult_t state (PACKET_OK if frame is completed).
 */
PacketResult_t FrameDecoder_InputByte(PacketDecoder_t *pDecoder, uint8_t byte);

/**
 * @brief Feeds a buffer of bytes (e.g. from DMA callback) into the decoder.
 * @param pDecoder Pointer to decoder context.
 * @param pBuffer Raw buffer pointer.
 * @param length Buffer length.
 * @return PacketResult_t state of the last processed byte.
 */
PacketResult_t FrameDecoder_InputBuffer(PacketDecoder_t *pDecoder, const uint8_t *pBuffer, uint16_t length);

/**
 * @brief Copies the collected frame from the decoder into a caller-provided ProtocolPacket_t structure.
 * @param pDecoder Pointer to decoder context.
 * @param pOutPacket Destination structure.
 * @return PacketResult_t status.
 */
PacketResult_t FrameDecoder_GetFrame(PacketDecoder_t *pDecoder, ProtocolPacket_t *pOutPacket);

#endif /* __FRAME_DECODER_H */
