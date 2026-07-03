#ifndef __UART_DRIVER_H
#define __UART_DRIVER_H

#include <stdint.h>
#include "protocol_config.h"

#define UART1_RX_BUFFER_SIZE 550U

/**
 * @brief Initializes USART1 DMA peripherals and structures.
 */
void UartDriver_Init(void);

/**
 * @brief Starts USART1 circular DMA reception.
 */
void UartDriver_StartReception(void);

/**
 * @brief Retrieves the current write index of the DMA buffer.
 * @return Current index (offset from start of buffer).
 */
uint16_t UartDriver_GetWriteIndex(void);

/**
 * @brief Returns a pointer to the internal raw circular buffer.
 */
const uint8_t* UartDriver_GetRxBuffer(void);

/**
 * @brief Transmits raw serialized bytes via USART1 DMA or polling.
 */
void UartDriver_Transmit(const uint8_t *pData, uint16_t length);

/**
 * @brief Handles DMA and USART errors, restarting reception.
 */
void UartDriver_HandleError(void);

#endif /* __UART_DRIVER_H */
