//
// file bgcolor_w32.cpp
// Created by Bartek
//

#include "bgcolor.h"
#include "Win32Handler.h"

namespace cc {

    std::ostream &operator<<(std::ostream &os, const bgcolor &_b) {
        WORD color_word = Win32Handler::getW32AttrWord(_b.color_, _b.bright_, true);
        SetConsoleTextAttribute(Win32Handler::outHandler, color_word);
        return os;
    }

}