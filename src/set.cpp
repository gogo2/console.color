//
// file set.cpp
// Created by Bartek
//

#include "set.h"

namespace cc {

    std::ostream &operator<<(std::ostream &os, const set &_s) {
        int text_color_code = int(_s.txt_color_) + (_s.txt_bright_ ? 60 : 0);
        int bg_color_code = int(_s.bgcolor_) + (_s.bg_bright_ ? 70 : 10);
        os << "\x1b[" << text_color_code << ';' << bg_color_code << 'm';
        return os;
    }

}