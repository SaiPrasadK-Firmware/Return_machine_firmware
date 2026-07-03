/**
 * @file command_dispatcher.h
 * @brief Android-STM32 Command Dispatcher.
 */

#ifndef __COMMAND_DISPATCHER_H
#define __COMMAND_DISPATCHER_H

#include "protocol_config.h"
#include "protocol_types.h"

/**
 * @brief Processes the parsed and validated protocol command packet.
 * @param pPacket Pointer to validated packet.
 * @return PacketResult_t handler routing status.
 */
PacketResult_t CommandDispatcher_Process(const ProtocolPacket_t *pPacket);

#endif /* __COMMAND_DISPATCHER_H */
