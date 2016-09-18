//
// file reset_bgcolor.cpp
// Created by Bartek
//

#include "reset_bgcolor.h"

namespace cc {

    std::ostream &reset_bgcolor(std::ostream &os) {
        os << "\x1b[49m";
        return os;
    }

}
