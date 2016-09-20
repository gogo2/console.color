//
// file reset_color_w32.cpp
// Created by Bartek
//

#include <Win32Handler.h>
#include "reset_color.h"

namespace cc {

    std::ostream &reset_color(std::ostream &os) {
        WORD default_color =
                Win32Handler::default_attrs & Win32Handler::zeroBGColor(); //setting background part of WORD to 0
        WORD current_bgcolor =
                Win32Handler::getCurrentAttrs() & Win32Handler::zeroColor(); //setting text part of WORD to 0
        SetConsoleTextAttribute(Win32Handler::outHandler, current_bgcolor | default_color);
        return os;
    }

}