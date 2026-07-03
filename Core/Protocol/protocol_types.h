/**
 * @file protocol_types.h
 * @brief Unified packet and header structure layouts.
 */

#ifndef __PROTOCOL_TYPES_H
#define __PROTOCOL_TYPES_H

#include <stdint.h>
#include "protocol_config.h"

typedef struct
{
    uint8_t header1;      // 0xAA
    uint8_t header2;      // 0x55
    uint8_t crcHigh;      // Checksum MSB
    uint8_t crcLow;       // Checksum LSB
    uint8_t command;      // Command ID
    uint8_t control;      // Target, Status, Board ID, or Flags
    uint16_t payloadLen;  // Payload length (Little Endian)
} ProtocolHeader_t;

typedef struct
{
    ProtocolHeader_t header;
    uint8_t payload[PROTOCOL_MAX_PAYLOAD_SIZE];
} ProtocolPacket_t;

#endif /* __PROTOCOL_TYPES_H */
