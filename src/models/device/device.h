//
// Created by Mykola on 19.11.2026.
//

#ifndef NOTFETCH_DEVICE_H
#define NOTFETCH_DEVICE_H

#include <string>
#include "../model.h"


class device {
    std::string hostname;
    std::string system_version;
    std::string kernel_version;
public:
    std::string GetHostName();
    std::string GetSystemVersion();
    std::string GetKernelVersion();

};

#endif //NOTFETCH_DEVICE_H
