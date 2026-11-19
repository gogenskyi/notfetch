//
// Created by Mykola on 16.11.2026.
//

#include "../model.h"

class ram {
    long memory = 0;
public:
    long GetMemory() {
        memory = (GetLongValue("hw.memsize_usable") / 1000000000);
        return memory;
    }
};