//
// Created by Mykola on 23.11.2026.
//

#include "display_panel.h"

DisplayPanel::Resolution::Resolution(const CGDirectDisplayID &display) {
    const auto mode = CGDisplayCopyDisplayMode(display);
    width = CGDisplayModeGetPixelWidth(mode);
    height = CGDisplayModeGetPixelHeight(mode);
    CGDisplayModeRelease(mode);
}
std::string DisplayPanel::GetResolutionLine() const {
    return  std::to_string(resolution_.GetWidth()) + "x" + std::to_string(resolution_.GetHeight());
}
int DisplayPanel::GetRefreshRate() const {
    return refresh_rate;
}
