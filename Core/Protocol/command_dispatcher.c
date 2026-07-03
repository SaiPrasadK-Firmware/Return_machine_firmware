#include "command_dispatcher.h"
#include "command_registry.h"
#include <stddef.h>

PacketResult_t CommandDispatcher_Process(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return PACKET_INVALID_HEADER;
    }

    CommandHandler_t handler = CommandRegistry_Find((CommandId_t)pPacket->header.command);
    if (handler == NULL)
    {
        return PACKET_UNSUPPORTED_COMMAND;
    }

    CommandResult_t res = CommandRegistry_Execute(handler, pPacket);
    switch (res)
    {
        case COMMAND_OK:
            return PACKET_OK;
        case COMMAND_INVALID_PARAMETER:
            return PACKET_INVALID_LENGTH;
        case COMMAND_UNSUPPORTED:
            return PACKET_UNSUPPORTED_COMMAND;
        default:
            return PACKET_INVALID_HEADER;
    }
}

