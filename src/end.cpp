//
// file end.cpp
// Created by Bartek
//

#include "end.h"

namespace cc {

    std::ostream &end(std::ostream &os) {
        os << "\x1b[0m";
        return os;
    }

}