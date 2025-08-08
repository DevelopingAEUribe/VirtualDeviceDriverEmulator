#include "driver.h"
#include <stdio.h>

// Simulated hardware registers (simple array)
static uint8_t hardware_registers[3] = {0x00, 0x00, 0x00};

uint8_t driver_read(uint8_t reg) {
    if (reg > 2) {
        printf("Read error: invalid register 0x%02X\n", reg);
        return 0xFF;  // Error code
    }
    printf("Read from register 0x%02X: 0x%02X\n", reg, hardware_registers[reg]);
    return hardware_registers[reg];
}

void driver_write(uint8_t reg, uint8_t value) {
    if (reg > 2) {
        printf("Write error: invalid register 0x%02X\n", reg);
        return;
    }
    hardware_registers[reg] = value;
    printf("Wrote 0x%02X to register 0x%02X\n", value, reg);
}
