//
// Created by Mykola on 16.11.2026.
//

#include "ram.h"

long ram::GetMemory() {
    memory = (GetLongValue("hw.memsize_usable") / 1000000000);
    return memory;
}