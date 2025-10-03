#pragma once

#include <Arduino.h>
#include "DualSenseControllerCore.h"
#include "DualSenseControllerOptions.h"

class DualSenseControllerBt {
public:
    explicit DualSenseControllerBt(DualSenseControllerOptions options);

    bool init();
    void poll();

private:
    DualSenseControllerCore core_;
};
