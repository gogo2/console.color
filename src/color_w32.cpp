//
// file color_w32.cpp
// Created by Bartek
//

#include "color.h"
#include "Win32Handler.h"

namespace cc {

    std::ostream &operator<<(std::ostream &os, const color &_c) {
            WORD new_color = Win32Handler::getW32AttrWord(_c.color_, _c.bright_, false);
            WORD current_bgcolor =
                    Win32Handler::getCurrentAttrs() & Win32Handler::zeroColor(); //setting text part of WORD to 0
            WORD color_word = current_bgcolor | new_color;
        SetConsoleTextAttribute(Win32Handler::outHandler, color_word);
        return os;
    }

}