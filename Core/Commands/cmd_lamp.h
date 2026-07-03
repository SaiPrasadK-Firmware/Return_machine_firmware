#ifndef __CMD_LAMP_H
#define __CMD_LAMP_H

#include "protocol_types.h"
#include "command_ids.h"
#include "command_dispatcher.h"

/**
 * @brief Handles the Chamber Lamp control command.
 * @param pPacket Received packet context.
 * @return CommandResult_t Status result code.
 */
CommandResult_t CmdLamp_Handle(const ProtocolPacket_t *pPacket);

#endif /* __CMD_LAMP_H */
