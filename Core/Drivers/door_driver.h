/**
 * @file door_driver.h
 * @brief Concrete STM32 Door hardware pin driver.
 */

#ifndef __DOOR_DRIVER_H
#define __DOOR_DRIVER_H

#include <stdint.h>

/**
 * @brief Actuates the lock solenoid pin (1 = lock, 0 = unlock).
 */
void DoorDriver_SetLockState(uint8_t lock);

/**
 * @brief Turns the door motor controller (1 = forward, 0 = stop).
 */
void DoorDriver_DriveMotor(uint8_t forward);

#endif /* __DOOR_DRIVER_H */
