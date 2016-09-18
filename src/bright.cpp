//
// file bright.cpp
// Created by Bartek
//

#include "bright.h"

namespace cc {

    std::ostream &bright(std::ostream &os) {
        os << "\x1b[1m";
        return os;
    }

}
