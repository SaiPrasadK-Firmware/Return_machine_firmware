#ifndef __CMD_WEIGHT_H
#define __CMD_WEIGHT_H

#include "protocol_types.h"
#include "command_ids.h"
#include "command_dispatcher.h"

/**
 * @brief Handles the weight check command from the Android host.
 * @param pPacket Received packet context.
 * @return CommandResult_t Status result code.
 */
CommandResult_t CmdWeight_Handle(const ProtocolPacket_t *pPacket);

#endif /* __CMD_WEIGHT_H */
