#include "crc16.h"
#include <assert.h>

void CRC16_Test(void)
{
    // Test standard test vector
    const uint8_t test[] = "123456789";
    uint16_t crc = CRC16_Modbus(test, 9);
    assert(crc == 0x4B37);

    // Verify against captured Android Packet
    const uint8_t android_packet[] = {0xAA, 0x55, 0x00, 0x06, 0x01, 0x02};
    uint16_t captured_crc = CRC16_Modbus(android_packet, sizeof(android_packet));
    assert(captured_crc == 0xD623);
}
