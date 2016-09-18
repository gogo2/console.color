//
// file set.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_SET_H
#define CONSOLE_COLOR_SET_H

#include <ostream>
#include "colors.h"

namespace cc {

    std::ostream &
    set(std::ostream &os, Color txt_color, Color bgcolor, bool txt_bright = false, bool bg_bright = false);

}

#endif //CONSOLE_COLOR_SET_H
