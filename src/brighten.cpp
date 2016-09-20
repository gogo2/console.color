//
// file bright.cpp
// Created by Bartek
//

#include "brighten.h"

namespace cc {

    std::ostream &brighten(std::ostream &os) {
        os << "\x1b[1m";
        return os;
    }

}
