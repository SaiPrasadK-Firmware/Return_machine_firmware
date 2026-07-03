#include "door_service.h"
#include "door_driver.h"
#include <stddef.h>

DoorResult_t DoorService_Process(const DoorRequest_t *pRequest)
{
    if (pRequest == NULL)
    {
        return DOOR_ERROR_HARDWARE;
    }

    switch (pRequest->action)
    {
        case DOOR_ACTION_LOCK:
            // Call hardware abstraction layer or concrete driver
            DoorDriver_SetLockState(1);
            break;
        case DOOR_ACTION_UNLOCK:
            DoorDriver_SetLockState(0);
            break;
        case DOOR_ACTION_OPEN:
            DoorDriver_DriveMotor(1);
            break;
        default:
            return DOOR_ERROR_HARDWARE;
    }

    return DOOR_SUCCESS;
}
