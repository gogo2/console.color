//
// file bgcolor_w32.cpp
// Created by Bartek
//

#include "bgcolor.h"
#include "Win32Handler.h"

namespace cc {

    std::ostream &operator<<(std::ostream &os, const bgcolor &_b) {
        WORD new_bgcolor = Win32Handler::getW32AttrWord(_b.color_, _b.intensity_, true);
        WORD current_color = Win32Handler::getCurrentAttrs() &
                             Win32Handler::zeroBGColor(); //setting background part of WORD to 0
        SetConsoleTextAttribute(Win32Handler::outHandler, current_color | new_bgcolor);
        return os;
    }

}