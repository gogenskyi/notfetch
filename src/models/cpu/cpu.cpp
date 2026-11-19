//
// Created by Mykola on 16.11.2026.
//

#include <string>
#include "cpu.h"

std::string cpu::GetName() {
    name = GetStringValue("machdep.cpu.brand_string");
    return name;
}
int cpu::GetCoresCount() {
    if (cores == 0)
        cores = GetIntValue("hw.physicalcpu");
    return cores;
}
int cpu::GetThreadCount() {
    if (threads == 0)
        threads = GetIntValue("machdep.cpu.thread_count");
    return threads;
}
