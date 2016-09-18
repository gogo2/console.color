//
// file set.cpp
// Created by Bartek
//

#include "set.h"

namespace cc {

    std::ostream &
    set(std::ostream &os, Color txt_color, Color bgcolor, bool txt_bright = false, bool bg_bright = false) {
        if (bright)
            os << "\x1b[" << ((int) color + 10) << ";1m";
        else
            os << "\x1b[" << ((int) color + 10) << 'm';
        return os;
    }

}