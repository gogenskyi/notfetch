//
// Created by Mykola on 16.11.2026.
//

#include <string>
#include "../model.h"

class cpu {
    std::string name;
    int cores = 0;
    int threads = 0;
public:

    std::string GetName() {
        name = GetStringValue("machdep.cpu.brand_string");
        return name;
    }
    int GetCoresCount() {
        if (cores == 0)
            cores = GetIntValue("hw.physicalcpu");
        return cores;
    }
    int GetThreadCount() {
        if (threads == 0)
            threads = GetIntValue("machdep.cpu.thread_count");
        return threads;
    }
};
