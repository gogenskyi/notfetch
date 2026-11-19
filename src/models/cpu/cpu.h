//
// Created by Mykola on 19.11.2026.
//

#ifndef NOTFETCH_CPU_H
#define NOTFETCH_CPU_H

#include "../model.h"

class cpu {
    std::string name;
    int cores = 0;
    int threads = 0;
public:

    std::string GetName();
    int GetCoresCount();
    int GetThreadCount();
};


#endif //NOTFETCH_CPU_H
