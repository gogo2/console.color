//
// file bgcolor.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_BGCOLOR_H
#define CONSOLE_COLOR_BGCOLOR_H

#include <ostream>
#include "enums.h"

namespace cc {

    class bgcolor {
    public:
        bgcolor(Color color, Intensity intensity = normal) : color_(color), intensity_(intensity) {};

        friend std::ostream &operator<<(std::ostream &os, const bgcolor &_b);

    private:
        Color color_;
        Intensity intensity_;
    };

}


#endif //CONSOLE_COLOR_BGCOLOR_H
