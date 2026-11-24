//
// Created by Mykola on 24.11.2026.
//

#include "Config.h"


Config::Config() {
     if (!exists(path)) {
          std::filesystem::create_directory("~/.config/notfetch");
          CreateDefaultConfig();
     }
}

void Config::GetConfig() {
     std::string line;
     int work = -1;
     for (int i = 0;std::getline(config,line);i++) {
          if (line.contains("!logo")) {
               work = LOGO;
          }
          if (line.contains("!components")) {
               work = COMPONENTS;
          }
          if (work == LOGO && !line.contains("};")) {
               ascii_logo.push_back(line);
          }
          if (work == COMPONENTS && !line.contains("};")) {
               switch ()
          }
     }
}

void Config::CreateDefaultConfig() const {
     std::fstream config_(path, std::ios::in | std::ios::out);
     std::fstream default_config_("config.conf", std::ios::in);
     if (!config_.is_open() || !default_config_.is_open()) {
          throw std::runtime_error("Exception"
                                   "Can't open file");
     }
     config = std::move(config_);
     default_config = std::move(default_config_);
     std::string line;
     while (std::getline(default_config,line)) {
          config >> line;
     }
}
