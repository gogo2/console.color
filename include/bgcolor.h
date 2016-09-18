//
// file bgcolor.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_BGCOLOR_H
#define CONSOLE_COLOR_BGCOLOR_H

#include <ostream>
#include "colors.h"

namespace cc {

    class bgcolor {
    public:
        bgcolor(Color color, bool bright = false) : color_(color), bright_(bright) {};

        friend std::ostream &operator<<(std::ostream &os, const bgcolor &_b);

    private:
        Color color_;
        bool bright_;
    };

}


#endif //CONSOLE_COLOR_BGCOLOR_H
