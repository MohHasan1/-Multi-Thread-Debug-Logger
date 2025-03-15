# Multi-Thread Debug Logger

## Overview
Multi-Thread Debug Logger is a lightweight and efficient logging system designed for embedded systems and low-resource environments. It enables real-time logging, debugging, and monitoring with minimal performance overhead.

## Features
- 🚀 **Lightweight & Efficient**: Optimized for embedded systems with minimal memory and CPU usage.
- 📡 **Real-Time Logging**: Supports logging over serial, file storage, and network.
- 🛠 **Customizable Log Levels**: Allows filtering logs by severity (INFO, DEBUG, ERROR, etc.).
- 🔌 **Modular & Extensible**: Can be integrated into various embedded projects.
- 📊 **Formatted Output**: Supports structured log messages for easy parsing.

## Installation
### Prerequisites
- C++ Compiler (GCC or Clang recommended)
- CMake (for build system configuration)
- Embedded hardware (e.g., STM32, ESP32) or simulator

### Steps
```sh
git clone https://github.com/MohHasan1/Embedded-Debug-Logging.git
cd Embedded-Debug-Logging
mkdir build && cd build
cmake ..
make
```

## Usage
### Basic Example
```cpp
#include "logger.h"

int main() {
    Logger log;
    log.info("System initialized");
    log.debug("Debugging mode enabled");
    log.error("Critical failure detected");
    return 0;
}
```

### Configuring Log Output
Modify `logger_config.h` to change the logging output method (e.g., Serial, File, or Network).

## Contribution
Contributions are welcome! Follow these steps:
1. Fork the repository.
2. Create a new branch: `git checkout -b feature-branch`.
3. Commit changes: `git commit -m "Added new feature"`.
4. Push to the branch: `git push origin feature-branch`.
5. Submit a pull request.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact
For issues and feature requests, please open an issue on [GitHub](https://github.com/MohHasan1/Embedded-Debug-Logging/issues).
