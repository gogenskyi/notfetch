//
// Created by Mykola on 23.11.2026.
//

#ifndef NOTFETCH_CONFIG_H
#define NOTFETCH_CONFIG_H
#include <vector>

inline std::vector<std::string> ascii_logo = {
    "     :====================:        ",
    "     ::                  ::        ",
    "     ::                  ::        ",
    "     ::                  ::        ",
    "     ::                  ::        ",
    "     ::                  ::        ",
    "     ::                  ::        ",
    "     ::                  ::        ",
    "     .-                  ::        ",
    "       .=:.          ..-:          ",
    "          .--      :=:             ",
    "             .-::-:                "
};

enum config {
    HostName,
    SystemVersion,
    KernelVersion,
    CpuModel,
    CoresCount,
    ThreadCount,
    Memory,
    Resolution,
    RefreshRate,
};

#endif //NOTFETCH_CONFIG_H
