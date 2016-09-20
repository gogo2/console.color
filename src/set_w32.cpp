//
// file set_w32.cpp
// Created by Bartek
//

#include <iostream>
#include "set.h"
#include "Win32Handler.h"

namespace cc {

    std::ostream &operator<<(std::ostream &os, const set &_s) {
        WORD color_word = Win32Handler::getW32AttrWord(_s.txt_color_, _s.txt_intensity_, false);
        color_word |= Win32Handler::getW32AttrWord(_s.bgcolor_, _s.bg_intensity_, true);
        SetConsoleTextAttribute(Win32Handler::outHandler, color_word);
        return os;
    }

}