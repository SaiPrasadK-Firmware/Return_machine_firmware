#ifndef __CMD_LED_H
#define __CMD_LED_H

#include "protocol_types.h"
#include "command_ids.h"
#include "command_dispatcher.h"

/**
 * @brief Handles the status LED ring query command.
 * @param pPacket Received packet context.
 * @return CommandResult_t Status result code.
 */
CommandResult_t CmdLed_Handle(const ProtocolPacket_t *pPacket);

#endif /* __CMD_LED_H */
