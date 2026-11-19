cmake_minimum_required(VERSION 4.3)
project(notfetch)

set(CMAKE_CXX_STANDARD 26)

add_executable(notfetch src/main.cpp
        src/models/cpu/CPU.cpp
        src/models/cpu/CPU.cpp
        src/models/ram/ram.cpp
        src/models/model.h
        src/models/device/device.cpp)
