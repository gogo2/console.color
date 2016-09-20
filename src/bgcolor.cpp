//
// file bgcolor.cpp
// Created by Bartek
//

#include "bgcolor.h"

namespace cc {

    std::ostream &operator<<(std::ostream &os, const bgcolor &_b) {
        int color_code = (int) _b.color_ + (_b.intensity_ == bright ? 70 : 10);
        os << "\x1b[" << color_code << 'm';
        return os;
    }

}