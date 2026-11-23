//
// Created by Mykola on 19.11.2026.
// //
#include "device.h"

std::string device::GetHostName() {
    if (hostname.empty())
        hostname = GetStringValue("kern.hostname");
    return hostname;
}

std::string device::GetSystemVersion() {
    if (system_version.empty())
        system_version = GetStringValue("kern.osproductversion");
    return system_version;
}
std::string device::GetKernelVersion() {
    if (kernel_version.empty())
        for (const auto &el : GetStringValue("kern.version")) {
        if (el != ':') {
            kernel_version += el;
            continue;
        }
        return kernel_version;
    }
}