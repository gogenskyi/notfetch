#include <functional>
#include <iostream>
#include "models/cpu/cpu.cpp"
#include "models/ram/ram.cpp"

static inline cpu c;
static inline ram r;

static std::vector<std::function<std::string()>> arr;

enum Config {
    CpuModel,
    CoresCount,
    ThreadCount,
    Memory,
};

static std::string PrintFromConfig(const Config cf) {
    switch (cf) {
        case CpuModel: {
            return c.GetName();
        }
        case CoresCount: {
            return std::to_string(c.GetCoresCount());
        }
        case ThreadCount: {
            return std::to_string(c.GetThreadCount());
        }
        case Memory: {
            return std::to_string(r.GetMemory());
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
