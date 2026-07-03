#ifndef __SENSOR_SERVICE_H
#define __SENSOR_SERVICE_H

#include <stdint.h>

typedef enum
{
    SENSOR_READ_DISTANCE,
    SENSOR_READ_WEIGHT,
    SENSOR_READ_TEMPERATURE,
    SENSOR_READ_HUMIDITY
} SensorReadType_t;

typedef struct
{
    SensorReadType_t readType;
} SensorRequest_t;

typedef enum
{
    SENSOR_SUCCESS,
    SENSOR_ERROR_FAULT,
    SENSOR_ERROR_OFFLINE
} SensorResult_t;

/**
 * @brief Coordinates distance and weight sensor data requests.
 */
SensorResult_t SensorService_Process(const SensorRequest_t *pRequest, uint32_t *pOutValue);

#endif /* __SENSOR_SERVICE_H */
