//
// file reset_w32.cpp
// Created by Bartek
//

#include "reset.h"
#include <Win32Handler.h>

namespace cc {

    std::ostream &reset(std::ostream &os) {
        SetConsoleTextAttribute(Win32Handler::outHandler, Win32Handler::default_attrs);
        return os;
    }

}