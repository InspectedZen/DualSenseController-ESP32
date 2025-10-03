#include "DualSenseControllerBt.h"

DualSenseControllerBt::DualSenseControllerBt(DualSenseControllerOptions options)
    : core_(options) {}

bool DualSenseControllerBt::init() {
    // Placeholder for Bluetooth pairing logic
    Serial.println("Bluetooth init placeholder");
    return true;
}

void DualSenseControllerBt::poll() {
    core_.poll();
}
