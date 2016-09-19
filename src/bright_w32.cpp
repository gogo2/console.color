//
// file bright_w32.cpp
// Created by Bartek
//

#include "bright.h"
#include "Win32Handler.h"

namespace cc {

    std::ostream &bright(std::ostream &os) {
        WORD current_color_word = Win32Handler::getCurrentAttrs();
        SetConsoleTextAttribute(Win32Handler::outHandler, (WORD) (current_color_word | FOREGROUND_INTENSITY));
        return os;
    }

}