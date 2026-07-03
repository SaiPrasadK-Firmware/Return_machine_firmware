/**
 * @file pump_driver.h
 * @brief Concrete pump driver interface.
 */

#ifndef __PUMP_DRIVER_H
#define __PUMP_DRIVER_H

#include <stdint.h>

/**
 * @brief Toggles the spray disinfection pump (1 = active, 0 = off).
 */
void PumpDriver_SetSprayState(uint8_t active);

#endif /* __PUMP_DRIVER_H */
