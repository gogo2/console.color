//
// file color.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_COLOR_H
#define CONSOLE_COLOR_COLOR_H

#include <ostream>
#include "enums.h"

namespace cc {

    class color {
    public:
        color(Color color, Intensity intensity = normal) : color_(color), intensity_(intensity) {};

        friend std::ostream &operator<<(std::ostream &os, const color &_c);

    private:
        Color color_;
        Intensity intensity_;
    };

}


#endif //CONSOLE_COLOR_COLOR_H
