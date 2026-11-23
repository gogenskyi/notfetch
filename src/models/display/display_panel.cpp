//
// Created by Mykola on 23.11.2026.
//

#include "display_panel.h"

DisplayPanel::Resolution::Resolution(const CGDirectDisplayID &display) {
    width = CGDisplayModeGetPixelWidth(CGDisplayCopyDisplayMode(display));
    height = CGDisplayModeGetPixelHeight(CGDisplayCopyDisplayMode(display));
    CGDisplayModeRelease(CGDisplayCopyDisplayMode(display));
}
std::string DisplayPanel::GetResolutionLine() const {
    return  std::to_string(resolution_.GetWidth()) + "x" + std::to_string(resolution_.GetHeight());
}
int DisplayPanel::GetRefreshRate() const {
    return refresh_rate;
}
