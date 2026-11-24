//
// Created by Mykola on 16.11.2026.
//

#include "ram.h"
#include "../model.h"

long ram::GetMemory() {
    if (memory == 0) {
        memory = (GetLongValue("hw.memsize_usable") / 1000000000);
    }
    return memory;
}