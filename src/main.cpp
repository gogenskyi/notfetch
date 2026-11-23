#include <iostream>
#include "models/cpu/cpu.h"
#include "models/ram/ram.h"
#include "models/device/device.h"
#include "config.h"
#include "models/display/display_panel.h"

static inline cpu c;
static inline ram r;
static inline device d;
static inline DisplayPanel display_panel;

static std::string PrintFromConfig(const config cf) {
    switch (cf) {
        case HostName: {
            return d.GetHostName();
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
            return "Memory: " + std::to_string(r.GetMemory()) + "Gb";
        }
        case Resolution: {
            return "Resolution: " + display_panel.GetResolutionLine();
        }
        case RefreshRate: {
            return "Refresh Rate: " +  std::to_string(display_panel.GetRefreshRate()) + " Hz";
        }

    }
    return {};
}

int main() {
    std::system("clear");
    for (auto i = 0;i < ascii_logo.size();i++){
        std::println("{}{}", ascii_logo[i],
                     PrintFromConfig(static_cast<config>(i)));
    }
    std::cout<<"\n\n\n\n\n";
    return 0;
}
