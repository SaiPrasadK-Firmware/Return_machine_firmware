/**
 * @file sensor_driver.h
 * @brief Concrete STM32 Sensor hardware peripheral driver.
 */

#ifndef __SENSOR_DRIVER_H
#define __SENSOR_DRIVER_H

#include <stdint.h>

/**
 * @brief Reads distance from ToF hardware.
 */
uint32_t SensorDriver_ReadDistance(void);

/**
 * @brief Reads scale metrics from weight sensor.
 */
uint32_t SensorDriver_ReadWeight(void);

/**
 * @brief Reads temperature level from environment sensor.
 */
uint32_t SensorDriver_ReadTemperature(void);

/**
 * @brief Reads humidity level from environment sensor.
 */
uint32_t SensorDriver_ReadHumidity(void);

#endif /* __SENSOR_DRIVER_H */
