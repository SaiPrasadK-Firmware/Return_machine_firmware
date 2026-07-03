#ifndef __CMD_LOCK_H
#define __CMD_LOCK_H

#include "command_ids.h"
#include "protocol_types.h"

CommandResult_t CmdLock_Handle(const ProtocolPacket_t *pPacket);

#endif /* __CMD_LOCK_H */
