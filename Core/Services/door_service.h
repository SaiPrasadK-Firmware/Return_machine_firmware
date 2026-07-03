#ifndef __DOOR_SERVICE_H
#define __DOOR_SERVICE_H

#include "command_ids.h"

typedef enum
{
    DOOR_ACTION_LOCK,
    DOOR_ACTION_UNLOCK,
    DOOR_ACTION_OPEN
} DoorAction_t;

typedef struct
{
    DoorAction_t action;
} DoorRequest_t;

typedef enum
{
    DOOR_SUCCESS,
    DOOR_ERROR_BUSY,
    DOOR_ERROR_JAM,
    DOOR_ERROR_TIMEOUT,
    DOOR_ERROR_HARDWARE
} DoorResult_t;

/**
 * @brief Processes request variables to execute motor open or locking hooks.
 */
DoorResult_t DoorService_Process(const DoorRequest_t *pRequest);

#endif /* __DOOR_SERVICE_H */
