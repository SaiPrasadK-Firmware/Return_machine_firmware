#ifndef __SYSTEM_SERVICE_H
#define __SYSTEM_SERVICE_H

#include <stdint.h>

typedef enum
{
    SYSTEM_INFO_GET_SERIAL,
    SYSTEM_INFO_GET_VERSION
} SystemInfoType_t;

typedef struct
{
    SystemInfoType_t infoType;
} SystemInfoRequest_t;

typedef enum
{
    SYSTEM_SUCCESS,
    SYSTEM_ERROR
} SystemResult_t;

/**
 * @brief Handles system health inquiries and handshakes.
 */
SystemResult_t SystemService_Process(const SystemInfoRequest_t *pRequest, uint8_t *pOutBuf, uint16_t maxLen, uint16_t *pOutLen);

#endif /* __SYSTEM_SERVICE_H */
