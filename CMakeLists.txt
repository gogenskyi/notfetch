cmake_minimum_required(VERSION 4.3)
project(notfetch)

set(CMAKE_CXX_STANDARD 26)


add_executable(notfetch src/main.cpp
        src/models/cpu/cpu.cpp
        src/models/ram/ram.cpp
        src/models/device/device.cpp
        src/models/display/display_panel.cpp
        src/models/display/display_panel.h)

if(APPLE)
    target_link_libraries(${PROJECT_NAME}
            PRIVATE
            "-framework CoreGraphics"
    )
endif()
