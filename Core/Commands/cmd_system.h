#ifndef __CMD_SYSTEM_H
#define __CMD_SYSTEM_H

#include "command_ids.h"
#include "protocol_types.h"

CommandResult_t CmdSystem_Handle(const ProtocolPacket_t *pPacket);

#endif /* __CMD_SYSTEM_H */
