//
// file reset_color.cpp
// Created by Bartek
//

#include "reset_color.h"

namespace cc {

    std::ostream &reset_color(std::ostream &os) {
        os << "\x1b[39m";
        return os;
    }

}
