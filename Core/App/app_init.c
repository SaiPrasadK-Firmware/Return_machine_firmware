/**
 * @file app_init.c
 * @brief Application-level initialization and self-test execution.
 */

#include "app_init.h"
#include "../Protocol/crc16.h"


#ifdef DEBUG
extern void CRC16_Test(void);
extern void Packet_Test(void);
#endif

void App_Init(void)
{
#ifdef DEBUG
    CRC16_Test();
    Packet_Test();
#endif
}


