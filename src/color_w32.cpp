//
// file color_w32.cpp
// Created by Bartek
//

#include "color.h"
#include "Win32Handler.h"

namespace cc {

    std::ostream &operator<<(std::ostream &os, const color &_c) {
        WORD color_word = Win32Handler::getW32AttrWord(_c.color_, _c.bright_, false);
        SetConsoleTextAttribute(Win32Handler::outHandler, color_word);
        return os;
    }

}