#include <stdio.h>
#include "driver.h"

int main() {
    printf("Virtual Device Driver Emulator\n");

    driver_write(REG_CONTROL, 0x1A);
    driver_write(REG_DATA, 0x55);

    uint8_t status = driver_read(REG_STATUS);
    uint8_t control = driver_read(REG_CONTROL);
    uint8_t data = driver_read(REG_DATA);

    printf("Status: 0x%02X\n", status);
    printf("Control: 0x%02X\n", control);
    printf("Data: 0x%02X\n", data);

    // Attempt invalid access
    driver_write(0x05, 0xFF);
    driver_read(0x05);

    return 0;
}
