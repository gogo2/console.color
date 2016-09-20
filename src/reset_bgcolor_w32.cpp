//
// file reset_bgcolor_w32.cpp
// Created by Bartek
//

#include <Win32Handler.h>
#include "reset_bgcolor.h"

namespace cc {

    std::ostream &reset_bgcolor(std::ostream &os) {
            WORD default_bgcolor =
                    Win32Handler::default_attrs & Win32Handler::zeroColor(); //setting text part of WORD to 0
            WORD current_color =
                    Win32Handler::getCurrentAttrs() &
                    Win32Handler::zeroBGColor(); //setting background part of WORD to 0
            WORD color_word = current_color | default_bgcolor;
            SetConsoleTextAttribute(Win32Handler::outHandler, color_word);
        return os;
    }

}
