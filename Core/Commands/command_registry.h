#ifndef __COMMAND_REGISTRY_H
#define __COMMAND_REGISTRY_H

#include "protocol_config.h"
#include "protocol_types.h"
#include "command_ids.h"

typedef CommandResult_t (*CommandHandler_t)(const ProtocolPacket_t *pPacket);

typedef struct
{
    CommandId_t commandId;
    CommandHandler_t handler;
    uint16_t minPayloadLen;
    uint16_t maxPayloadLen;
    bool requiresAuth;
} CommandEntry_t;

void CommandRegistry_Init(void);
bool CommandRegistry_IsSupported(CommandId_t commandId);
CommandHandler_t CommandRegistry_Find(CommandId_t commandId);
CommandResult_t CommandRegistry_Execute(CommandHandler_t handler, const ProtocolPacket_t *pPacket);

#endif /* __COMMAND_REGISTRY_H */
