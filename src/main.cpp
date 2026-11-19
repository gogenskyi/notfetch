#include <functional>
#include <iostream>
#include "models/cpu/cpu.h"
#include "models/ram/ram.h"
#include "models/device/device.h"

static inline cpu c;
static inline ram r;
static inline device d;

enum Config {
    HostName,
    SystemVersion,
    KernelVersion,
    CpuModel,
    CoresCount,
    ThreadCount,
    Memory,
};

static std::string PrintFromConfig(const Config cf) {
    switch (cf) {
        case HostName: {
            return "Hostname: " + d.GetHostName();
        }
        case SystemVersion: {
            return "System Version: " + d.GetSystemVersion();
        }
        case KernelVersion: {
            return d.GetKernelVersion();
        }
        case CpuModel: {
            return "CPU: " + c.GetName();
        }
        case CoresCount: {
            return "Cores: " + std::to_string(c.GetCoresCount());
        }
        case ThreadCount: {
            return "Threads: " + std::to_string(c.GetThreadCount());
        }
        case Memory: {
            return "RAM " + std::to_string(r.GetMemory());
        }

    }
    return {};
}

int main() {
    for (auto i = 0;i < ascii_logo.size();i++){
        std::cout<<ascii_logo[i]<<PrintFromConfig(static_cast<Config>(i))<<std::endl;
    }

    return 0;
}
