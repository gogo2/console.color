//
// file color.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_COLOR_H
#define CONSOLE_COLOR_COLOR_H

#include <ostream>
#include "colors.h"

namespace cc {

    std::ostream &color(std::ostream &os, Color color, bool bright = false);

}


#endif //CONSOLE_COLOR_COLOR_H
