#include "system_service.h"
#include "flash_manager.h"
#include <stdio.h>
#include <string.h>

SystemResult_t SystemService_Process(const SystemInfoRequest_t *pRequest, uint8_t *pOutBuf, uint16_t maxLen, uint16_t *pOutLen)
{
    if (pRequest == NULL || pOutBuf == NULL || pOutLen == NULL)
    {
        return SYSTEM_ERROR;
    }

    MachineConfig_t config;
    if (!FlashManager_ReadConfig(&config))
    {
        return SYSTEM_ERROR;
    }

    switch (pRequest->infoType)
    {
        case SYSTEM_INFO_GET_SERIAL:
            // Format ID parameter to target output string buffer
            if (maxLen < 16) return SYSTEM_ERROR;
            // Outputs structured ID: e.g. RVM-ID-01
            int len = snprintf((char *)pOutBuf, maxLen, "RVM-ID-%02X", config.machineId);
            if (len < 0) return SYSTEM_ERROR;
            *pOutLen = (uint16_t)len;
            break;
        case SYSTEM_INFO_GET_VERSION:
            if (maxLen < 8) return SYSTEM_ERROR;
            int vlen = snprintf((char *)pOutBuf, maxLen, "v%d.%d", 
                                (config.firmwareVersion >> 8) & 0xFF, 
                                config.firmwareVersion & 0xFF);
            if (vlen < 0) return SYSTEM_ERROR;
            *pOutLen = (uint16_t)vlen;
            break;
        default:
            return SYSTEM_ERROR;
    }

    return SYSTEM_SUCCESS;
}

