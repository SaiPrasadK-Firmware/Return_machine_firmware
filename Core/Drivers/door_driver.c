#include "door_driver.h"

// In the future this wraps GPIO HAL operations (e.g. HAL_GPIO_WritePin)
void DoorDriver_SetLockState(uint8_t lock)
{
    (void)lock;
}

void DoorDriver_DriveMotor(uint8_t forward)
{
    (void)forward;
}
