#ifndef __CMD_ENV_H
#define __CMD_ENV_H

#include "protocol_types.h"
#include "command_ids.h"
#include "command_dispatcher.h"

/**
 * @brief Handles the Temperature/Humidity status check command.
 * @param pPacket Received packet context.
 * @return CommandResult_t Status result code.
 */
CommandResult_t CmdEnv_Handle(const ProtocolPacket_t *pPacket);

#endif /* __CMD_ENV_H */
