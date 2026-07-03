/**
 * @file crc16.h
 * @brief CRC16-Modbus calculation routines.
 *
 * Used by the Android ↔ STM32 communication protocol.
 */

#ifndef __CRC16_H
#define __CRC16_H

#include <stdint.h>

/**
 * @brief Calculates the CRC-16 (Modbus) checksum of a buffer.
 * @param pData Pointer to the input data buffer.
 * @param length Length of the input data buffer.
 * @return Calculated 16-bit CRC value.
 */
uint16_t CRC16_Modbus(const uint8_t *pData, uint16_t length);

#endif /* __CRC16_H */
