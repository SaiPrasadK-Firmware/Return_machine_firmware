#ifndef __COMMAND_IDS_H
#define __COMMAND_IDS_H

#include <stdint.h>
#include <stdbool.h>

typedef enum
{
    CMD_SYS_INFO      = 0x21U,
    CMD_LOCK          = 0x51U,
    CMD_GET_WEIGHT    = 0x56U,
    CMD_GET_DISTANCE  = 0x57U,
    CMD_GET_DEVSTATUS = 0x58U,
    CMD_POWER_ON_INSIDE_LAMP = 0x59U,
    CMD_ONERING_LED_ON       = 0x5AU,
    CMD_VENTILATOR           = 0x5BU,
    CMD_TEM_HUM              = 0x5CU,
    CMD_OZONE         = 0x5EU
} CommandId_t;

typedef enum
{
    COMMAND_OK,
    COMMAND_INVALID_PARAMETER,
    COMMAND_BUSY,
    COMMAND_TIMEOUT,
    COMMAND_HARDWARE_ERROR,
    COMMAND_UNSUPPORTED
} CommandResult_t;

#endif /* __COMMAND_IDS_H */
