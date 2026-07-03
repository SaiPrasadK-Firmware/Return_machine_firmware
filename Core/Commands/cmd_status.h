#ifndef __CMD_STATUS_H
#define __CMD_STATUS_H

#include "protocol_types.h"
#include "command_ids.h"

/**
 * @brief Command handler for getting device status (CMD_GET_DEVSTATUS).
 */
CommandResult_t CmdStatus_Handle(const ProtocolPacket_t *pPacket);

#endif /* __CMD_STATUS_H */
