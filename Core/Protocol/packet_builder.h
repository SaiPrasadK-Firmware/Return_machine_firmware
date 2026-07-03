/**
 * @file packet_builder.h
 * @brief Android-STM32 Protocol Packet Builder.
 */

#ifndef __PACKET_BUILDER_H
#define __PACKET_BUILDER_H

#include "protocol_config.h"
#include "protocol_types.h"

/**
 * @brief Serializes a packet structure into a transmission buffer, calculating and embedding the CRC.
 * @param pPacket Pointer to the source packet struct to serialize.
 * @param pDestBuffer Destination buffer to write raw bytes.
 * @param maxDestLen Destination buffer size.
 * @return Total bytes written, or 0 on error.
 */
uint16_t Packet_Build(const ProtocolPacket_t *pPacket, uint8_t *pDestBuffer, uint16_t maxDestLen);

#endif /* __PACKET_BUILDER_H */
