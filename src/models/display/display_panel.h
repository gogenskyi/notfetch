//
// Created by Mykola on 23.11.2026.
//

#ifndef NOTFETCH_DISPLAY_PANEL_H
#define NOTFETCH_DISPLAY_PANEL_H
#include <string>
#include <CoreGraphics/CoreGraphics.h>


class DisplayPanel {
    class Resolution {
        unsigned long width = 0;
        unsigned long height = 0;
    public:
        explicit Resolution(const CGDirectDisplayID& display);
        unsigned long GetWidth() const {
            return width;
        }
        unsigned long GetHeight() const {
            return height;
        }
    };
    int refresh_rate = 0;
    Resolution resolution_;
    CGDirectDisplayID display_id_;

public:
    DisplayPanel() : resolution_(display_id_), display_id_() {
        refresh_rate = static_cast<int>(CGDisplayModeGetRefreshRate(CGDisplayCopyDisplayMode(display_id_)));
    }

    std::string GetResolutionLine() const;

    int GetRefreshRate() const;
};


#endif //NOTFETCH_DISPLAY_PANEL_H
