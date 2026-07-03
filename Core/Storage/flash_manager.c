#include "flash_manager.h"
#include "main.h"
#include <string.h>

bool FlashManager_ReadConfig(MachineConfig_t *pConfig)
{
    if (pConfig == NULL)
    {
        return false;
    }

    // Read directly from mapped memory
    memcpy(pConfig, (const void *)CONFIG_FLASH_ADDRESS, CONFIG_BLOCK_SIZE);

    // If memory is empty/uninitialized (0xFF), load defaults
    if (pConfig->machineId == 0xFF)
    {
        FlashManager_RestoreDefaults(pConfig);
        FlashManager_WriteConfig(pConfig);
    }

    return true;
}

bool FlashManager_WriteConfig(const MachineConfig_t *pConfig)
{
    if (pConfig == NULL)
    {
        return false;
    }

    HAL_FLASH_Unlock();

    // Erase page
    FLASH_EraseInitTypeDef eraseInit;
    eraseInit.TypeErase = FLASH_TYPEERASE_PAGES;
    eraseInit.PageAddress = CONFIG_FLASH_ADDRESS;
    eraseInit.NbPages = 1;

    uint32_t pageError = 0;
    if (HAL_FLASHEx_Erase(&eraseInit, &pageError) != HAL_OK)
    {
        HAL_FLASH_Lock();
        return false;
    }

    // Write parameters in 16-bit half-words
    uint16_t *pData = (uint16_t *)pConfig;
    uint32_t address = CONFIG_FLASH_ADDRESS;
    uint16_t sizeHalfWords = (CONFIG_BLOCK_SIZE + 1) / 2;

    for (uint16_t i = 0; i < sizeHalfWords; i++)
    {
        if (HAL_FLASH_Program(FLASH_TYPEPROGRAM_HALFWORD, address, pData[i]) != HAL_OK)
        {
            HAL_FLASH_Lock();
            return false;
        }
        address += 2;
    }

    HAL_FLASH_Lock();
    return true;
}

void FlashManager_RestoreDefaults(MachineConfig_t *pConfig)
{
    if (pConfig == NULL) return;

    memset(pConfig, 0, sizeof(MachineConfig_t));
    pConfig->machineId = 0x01;
    pConfig->reserved = 0x00;
    pConfig->firmwareVersion = 0x0100; // v1.0
    pConfig->bootStatus = 0x0000;      // OK
}
