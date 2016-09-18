//
// file bgcolor.cpp
// Created by Bartek
//

#include "bgcolor.h"

namespace cc {

    std::ostream &bgcolor(std::ostream &os, Color bgcolor, bool bright = false) {
        if (bright)
            os << "\x1b[" << ((int) color + 10) << ";1m";
        else
            os << "\x1b[" << ((int) color + 10) << 'm';
        return os;
    }

}