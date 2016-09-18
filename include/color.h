//
// file color.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_COLOR_H
#define CONSOLE_COLOR_COLOR_H

#include <ostream>
#include "colors.h"

namespace cc {

    class color {
    public:
        color(Color color, bool bright = false) : color_(color), bright_(bright) {};

        friend std::ostream &operator<<(std::ostream &os, const color &_c);

    private:
        Color color_;
        bool bright_;
    };

}


#endif //CONSOLE_COLOR_COLOR_H
