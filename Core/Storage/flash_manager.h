#ifndef __FLASH_MANAGER_H
#define __FLASH_MANAGER_H

#include <stdint.h>
#include <stdbool.h>

#define CONFIG_FLASH_ADDRESS 0x0803F800U
#define CONFIG_BLOCK_SIZE    47U // 0x2F bytes

typedef struct
{
    uint8_t machineId;
    uint8_t reserved;
    uint16_t firmwareVersion;
    uint16_t bootStatus;
    uint8_t padding[41];
} MachineConfig_t;

/**
 * @brief Reads configuration parameters from FLASH sector.
 */
bool FlashManager_ReadConfig(MachineConfig_t *pConfig);

/**
 * @brief Writes configuration parameters to FLASH sector by erasing and re-writing.
 */
bool FlashManager_WriteConfig(const MachineConfig_t *pConfig);

/**
 * @brief Restores factory default parameters.
 */
void FlashManager_RestoreDefaults(MachineConfig_t *pConfig);

#endif /* __FLASH_MANAGER_H */
