//
// Created by Mykola on 16.11.2026.
//

#ifndef NOTFETCH_MODEL_H
#define NOTFETCH_MODEL_H
#include <string>
#include <sys/sysctl.h>

static std::string GetStringValue(const std::string &command) {
    char line[256];
    size_t size = sizeof(line);
    if (sysctlbyname(command.c_str(),line,&size,nullptr,0)==0) {
        return line;
    }
    return {};
}

static int GetIntValue(const std::string &command) {
    int value = 0;
    size_t int_size = sizeof(value);

    if (sysctlbyname(command.c_str(), &value, &int_size, nullptr, 0) == 0) {
        return value;
    }
    return 0;
}

static long GetLongValue(const std::string &command) {
    long value = 0;
    size_t int_size = sizeof(value);

    if (sysctlbyname(command.c_str(), &value, &int_size, nullptr, 0) == 0) {
        return value;
    }
    return 0;
}

#endif //NOTFETCH_MODEL_H
