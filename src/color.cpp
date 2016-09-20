//
// file color.cpp
// Created by Bartek
//

#include "color.h"

namespace cc {

    std::ostream &operator<<(std::ostream &os, const color &_c) {
        int color_code = (int) _c.color_ + (_c.intensity_ == bright ? 60 : 0);
        os << "\x1b[" << color_code << 'm';
        return os;
    }

}