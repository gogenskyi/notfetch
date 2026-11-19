cmake_minimum_required(VERSION 4.3)
project(notfetch)

set(CMAKE_CXX_STANDARD 26)

add_executable(notfetch src/main.cpp
        src/models/model.h
        src/models/ram/ram.h
        src/models/device/device.h
        src/models/cpu/cpu.h)
