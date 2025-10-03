#pragma once

#include "DualSenseControllerTypes.h"
#include "DualSenseControllerOptions.h"

class DualSenseControllerCore {
public:
    explicit DualSenseControllerCore(DualSenseControllerOptions options);
    void poll();
    void reset();
    bool isConnected() const;
    DualSenseControllerState getState() const;
    int16_t getValue(DualSenseControllerValueId id) const;

private:
    DualSenseControllerOptions options_;
    DualSenseControllerState state_ = DualSenseControllerState::DISCONNECTED;
    int16_t values_[64] = {0};
};
