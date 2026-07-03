#ifndef __RELAY_DRIVER_H
#define __RELAY_DRIVER_H

#include <stdint.h>

/**
 * @brief Sets output state for GPIOB Pin 12.
 */
void RelayDriver_SetOutput12(uint8_t state);

/**
 * @brief Sets output state for GPIOB Pin 13.
 */
void RelayDriver_SetOutput13(uint8_t state);

/**
 * @brief Sets output state for GPIOB Pin 14.
 */
void RelayDriver_SetOutput14(uint8_t state);

/**
 * @brief Sets output state for GPIOB Pin 15.
 */
void RelayDriver_SetOutput15(uint8_t state);

#endif /* __RELAY_DRIVER_H */
