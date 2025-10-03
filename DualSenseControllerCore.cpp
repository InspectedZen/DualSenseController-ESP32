#include "DualSenseControllerCore.h"

DualSenseControllerCore::DualSenseControllerCore(DualSenseControllerOptions options)
    : options_(options) {}

void DualSenseControllerCore::poll() {
    // Add Bluetooth polling logic here later
}

void DualSenseControllerCore::reset() {
    state_ = DualSenseControllerState::DISCONNECTED;
    for (int i = 0; i < 64; ++i) {
        values_[i] = 0;
    }
}

bool DualSenseControllerCore::isConnected() const {
    return state_ == DualSenseControllerState::CONNECTED;
}

DualSenseControllerState DualSenseControllerCore::getState() const {
    return state_;
}

int16_t DualSenseControllerCore::getValue(DualSenseControllerValueId id) const {
    return values_[(int)id];
}
