# notfetch
##notfetch is a lightweight, terminal-based system information tool written in C++26.

It displays selected information about your machine alongside a custom ASCII logo, taking inspiration from tools such as neofetch and fastfetch.
Status: Early development. The current implementation targets macOS and uses native macOS system APIs.

## Features
The current codebase is designed to display:
- Hostname
- macOS version
- Kernel version
- CPU model
- Physical CPU core count
- CPU thread count
- Installed memory
- Display resolution
- Display refresh rate
- Custom ASCII-art layout
System information is collected through sysctlbyname(). Display information is accessed through Apple's CoreGraphics framework.
## Example
The exact output depends on your hardware and system configuration.
     :====================:        MacBook-Air-User.local
     ::                  ::        System Version: 26.6.2
     ::                  ::        Darwin Kernel Version: 25.6.0   
     ::                  ::        CPU:             Apple M2
     ::                  ::        Cores:           8
     ::                  ::        Threads:         8
     ::                  ::        Memory:          16Gb
     ::                  ::        Resolution:      2560x1600
     ::                  ::        Refresh Rate:    60 Hz
     ::                  ::
     .-                  ::
       .=:.          ..-:
          .--      :=:
             .-::-:

## Requirements
- macOS
- A C++ compiler with C++26 support, including support for std::println
- CMake 4.3 or newer
- Apple's CoreGraphics framework (provided by macOS)
Build
Clone the repository:
git clone https://github.com/gogenskyi/notfetch.git
cd notfetch
Configure the project:
cmake -S . -B build
Build:
cmake --build build
Run the executable:
./build/notfetch
Depending on your CMake generator and build configuration, the executable may be located in a configuration-specific subdirectory.
## Project Structure

```text
notfetch/
├── CMakeLists.txt
└── src/
    ├── main.cpp
    ├── config.h
    └── models/
        ├── model.h
        ├── cpu/
        │   ├── cpu.h
        │   └── cpu.cpp
        ├── device/
        │   ├── device.h
        │   └── device.cpp
        ├── display/
        │   ├── display_panel.h
        │   └── display_panel.cpp
        └── ram/
            ├── ram.h
            └── ram.cpp
```
## How It Works
The project separates system information into small model classes:
- cpu retrieves the processor name, physical core count, and thread count.
- ram retrieves the usable memory amount.
- device retrieves the hostname, operating system version, and kernel version.
- DisplayPanel handles display-related information through CoreGraphics.
- model.h provides helper functions for reading system values using sysctlbyname().
- config.h contains the ASCII logo and the order in which information is printed.
## Platform Compatibility
notfetch currently relies on macOS-specific interfaces:
- <sys/sysctl.h> and sysctlbyname()
- <CoreGraphics/CoreGraphics.h>
- The CoreGraphics framework
Therefore, Linux and Windows are not currently supported.
Contributing
Contributions, bug reports, and suggestions are welcome. Feel free to open an issue or submit a pull request.
License
No license has been specified for this repository yet. Until a license is added, all rights remain with the copyright holder.
