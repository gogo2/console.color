//
// file color.cpp
// Created by Bartek
//

#include "color.h"

namespace cc {

    std::ostream &bgcolor(std::ostream &os, Color color, bool bright = false) {
        if (bright)
            os << "\x1b[" << ((int) color) << ";1m";
        else
            os << "\x1b[" << ((int) color) << 'm';
        return os;
    }

}