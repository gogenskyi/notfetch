//
// Created by Mykola on 16.11.2026.
//

#ifndef NOTFETCH_MODEL_H
#define NOTFETCH_MODEL_H
#include <string>
#include <sys/sysctl.h>

static std::string GetStringValue(const std::string &command) {
    size_t size = 0;

    if (sysctlbyname(command.c_str(),nullptr,&size,nullptr,0) != 0) {
        return {};
    }

    std::string line(size,'\0');

    if (sysctlbyname(command.c_str(),line.data(),&size,nullptr,0) != 0) {
        return {};
    }
    if (!line.empty() && line.back() == '\0') {
        line.pop_back();
    }
    return line;
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
