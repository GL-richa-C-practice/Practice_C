# Lightweight C++ Diagnostic Stack (AUTOSAR-like)

This project implements a lightweight, testable diagnostic stack using modern C++11 to simulate a basic UDS service handler for embedded automotive ECUs.

## Features

- Handles `0x22` (ReadDataByIdentifier) UDS request
- Modular design with `DiagnosticService` and `ServiceHandler`
- Unit tests using GoogleTest
- CMake-based build system

## Build & Run

```bash
mkdir build && cd build
cmake ..
make
./src/DiagnosticService_test  # Run unit test
./src/DiagnosticService       # Run main demo
```
