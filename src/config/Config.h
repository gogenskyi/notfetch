//
// Created by Mykola on 24.11.2026.
//

#ifndef NOTFETCH_CONFIG_H
#define NOTFETCH_CONFIG_H

#include <filesystem>
#include <fstream>
#include <vector>

class Config {
    const std::filesystem::path path = "~/.config/notfetch/config.conf";
    static std::fstream config;
    static std::fstream default_config;
    static std::vector<std::string> ascii_logo;

    enum READ_INFO {
        LOGO,
        COMPONENTS,
    };


public:

    Config();
    static void GetConfig();
    void CreateDefaultConfig() const;
};


#endif //NOTFETCH_CONFIG_H
