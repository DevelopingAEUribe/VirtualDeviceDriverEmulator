#ifndef DRIVER_H
#define DRIVER_H

#include <stdint.h>

// Define some fake hardware register addresses
#define REG_STATUS 0x00
#define REG_CONTROL 0x01
#define REG_DATA 0x02

// Read from a "register"
uint8_t driver_read(uint8_t reg);

// Write to a "register"
void driver_write(uint8_t reg, uint8_t value);

#endif // DRIVER_H
