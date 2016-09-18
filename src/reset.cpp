//
// file end.cpp
// Created by Bartek
//

#include "reset.h"

namespace cc {

    std::ostream &reset(std::ostream &os) {
        os << "\x1b[0m";
        return os;
    }

}