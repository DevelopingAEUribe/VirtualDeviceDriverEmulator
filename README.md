Virtual Device Driver Emulator
Overview
This project simulates a basic device driver in C by emulating communication between software and hardware through a virtual COM port interface. It demonstrates low-level programming concepts such as:

Mock reading and writing of hardware registers

Simulated memory-mapped I/O

Handling of invalid register accesses with error reporting

No actual hardware is needed — the entire driver runs in software.

Features
Simulated hardware registers with read/write access

Error handling for invalid register accesses

Console output demonstrating register interactions

Project Structure
bash
Copy
Edit
/VirtualDeviceDriverEmulator
  ├─ driver.h       # Driver interface declarations
  ├─ driver.c       # Driver implementation (mock read/write)
  ├─ main.c         # Program entry point and test cases
Getting Started
Prerequisites
Visual Studio or any C compiler (e.g., clang, gcc)

Basic knowledge of C programming

Build and Run
Using Visual Studio
Open the project in Visual Studio.

Add all source files (driver.h, driver.c, main.c).

Build the solution (Ctrl+Shift+B).

Run the program (Ctrl+F5).

Using Command Line
bash
Copy
Edit
clang main.c driver.c -o VirtualDeviceDriverEmulator
./VirtualDeviceDriverEmulator
Usage
On running, the program will:

Write values to simulated device registers

Read values from registers

Attempt invalid register accesses, showing error messages

Example console output:

vbnet
Copy
Edit
Virtual Device Driver Emulator
Wrote 0x1A to register 0x01
Wrote 0x55 to register 0x02
Read from register 0x00: 0x00
Read from register 0x01: 0x1A
Read from register 0x02: 0x55
Status: 0x00
Control: 0x1A
Data: 0x55
Write error: invalid register 0x05
Read error: invalid register 0x05
Resume Highlights
Developed a mock device driver in C simulating register read/write via virtual memory-mapped I/O.

Implemented error handling for invalid hardware register accesses.

Demonstrated understanding of low-level hardware-software communication.

License
MIT License
