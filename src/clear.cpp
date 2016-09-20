//
// file clear.cpp.cpp
// Created by Bartek
//

#include "reset.h"

namespace cc {

    std::ostream &clear(std::ostream &os) {
        os << "\x1B[2J\x1B[H";
        return os;
    }

}