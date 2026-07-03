#ifndef __CMD_FAN_H
#define __CMD_FAN_H

#include "protocol_types.h"
#include "command_ids.h"
#include "command_dispatcher.h"

/**
 * @brief Handles the Exhaust Ventilator Fan command.
 * @param pPacket Received packet context.
 * @return CommandResult_t Status result code.
 */
CommandResult_t CmdFan_Handle(const ProtocolPacket_t *pPacket);

#endif /* __CMD_FAN_H */
