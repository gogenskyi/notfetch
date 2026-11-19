//
// Created by Mykola on 19.11.2026.
//
#include "../model.h"

class device {
    std::string hostname;
    std::string system_version;
    std::string kernel_version;
public:
    std::string GetHostName() {
        if (hostname.empty())
            hostname = GetStringValue("kern.hostname");
        return hostname;
    }
    std::string GetSystemVersion() {
        if (system_version.empty())
            system_version = GetStringValue("kern.osproductversion");
        return system_version;
    }
    std::string GetKernelVersion() {
        if (kernel_version.empty())
            kernel_version = GetStringValue("kern.version");
        return kernel_version;
    }

};