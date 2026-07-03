#include "command_registry.h"
#include "cmd_system.h"
#include "cmd_lock.h"
#include "cmd_weight.h"
#include "cmd_lamp.h"
#include "cmd_led.h"
#include "cmd_fan.h"
#include "cmd_env.h"
#include "cmd_distance.h"
#include "cmd_status.h"
#include <stddef.h>

static const CommandEntry_t commandTable[] =
{
    { CMD_SYS_INFO,      CmdSystem_Handle,  0, 0, false },
    { CMD_LOCK,          CmdLock_Handle,    0, 0, false },
    { CMD_GET_WEIGHT,    CmdWeight_Handle,  0, 0, false },
    { CMD_POWER_ON_INSIDE_LAMP, CmdLamp_Handle, 0, 0, false },
    { CMD_ONERING_LED_ON, CmdLed_Handle,     0, 0, false },
    { CMD_VENTILATOR,    CmdFan_Handle,      0, 0, false },
    { CMD_TEM_HUM,       CmdEnv_Handle,      0, 0, false },
    { CMD_GET_DEVSTATUS, CmdStatus_Handle,  0, 0, false },
    { CMD_GET_DISTANCE,  CmdDistance_Handle,0, 0, false }
};

#define COMMAND_TABLE_SIZE (sizeof(commandTable) / sizeof(CommandEntry_t))

void CommandRegistry_Init(void)
{
    // Placeholder for runtime registration hooks if needed in the future
}

bool CommandRegistry_IsSupported(CommandId_t commandId)
{
    return (CommandRegistry_Find(commandId) != NULL);
}

CommandHandler_t CommandRegistry_Find(CommandId_t commandId)
{
    for (size_t i = 0; i < COMMAND_TABLE_SIZE; i++)
    {
        if (commandTable[i].commandId == commandId)
        {
            return commandTable[i].handler;
        }
    }
    return NULL;
}

CommandResult_t CommandRegistry_Execute(CommandHandler_t handler, const ProtocolPacket_t *pPacket)
{
    if (handler == NULL || pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    // Verify metadata length bounds before dispatching
    for (size_t i = 0; i < COMMAND_TABLE_SIZE; i++)
    {
        if (commandTable[i].handler == handler)
        {
            if (pPacket->header.payloadLen < commandTable[i].minPayloadLen ||
                pPacket->header.payloadLen > commandTable[i].maxPayloadLen)
            {
                return COMMAND_INVALID_PARAMETER;
            }
            break;
        }
    }

    return handler(pPacket);
}
