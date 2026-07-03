/**
 * @file cmd_lock.c
 * @brief Door Lock command family handler.
 */

#include "cmd_lock.h"
#include "door_service.h"
#include <stddef.h>

CommandResult_t CmdLock_Handle(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    DoorRequest_t request;
    uint8_t control_byte = pPacket->header.control;

    switch (control_byte)
    {
        case 0x01:
            request.action = DOOR_ACTION_LOCK;
            break;
        case 0x02:
            request.action = DOOR_ACTION_UNLOCK;
            break;
        case 0x03:
            request.action = DOOR_ACTION_OPEN;
            break;
        default:
            return COMMAND_INVALID_PARAMETER;
    }

    DoorResult_t result = DoorService_Process(&request);
    if (result != DOOR_SUCCESS)
    {
        return COMMAND_HARDWARE_ERROR;
    }

    return COMMAND_OK;
}
