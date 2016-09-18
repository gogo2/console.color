//
// file bgcolor.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_BGCOLOR_H
#define CONSOLE_COLOR_BGCOLOR_H

#include <ostream>
#include "colors.h"

namespace cc {

    std::ostream &bgcolor(std::ostream &os, Color bgcolor, bool bright = false);

}


#endif //CONSOLE_COLOR_BGCOLOR_H
