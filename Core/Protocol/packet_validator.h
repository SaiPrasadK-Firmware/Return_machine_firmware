/**
 * @file packet_validator.h
 * @brief Protocol packet verification and validation.
 */

#ifndef __PACKET_VALIDATOR_H
#define __PACKET_VALIDATOR_H

#include "protocol_config.h"
#include "protocol_types.h"
#include <stdbool.h>

/**
 * @brief Verifies the CRC checksum of the packet.
 * @param pPacket Pointer to structured packet.
 * @return true if calculated CRC matches the packet header's CRC, false otherwise.
 */
bool Packet_VerifyCRC(const ProtocolPacket_t *pPacket);

/**
 * @brief Checks if packet fields conform to framing limits.
 * @param pPacket Pointer to structured packet.
 * @return PacketResult_t validation code.
 */
PacketResult_t Packet_Validate(const ProtocolPacket_t *pPacket);

#endif /* __PACKET_VALIDATOR_H */
