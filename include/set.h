//
// file set.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_SET_H
#define CONSOLE_COLOR_SET_H

#include <ostream>
#include "enums.h"

namespace cc {

    class set {
    public:
        set(Color txt_color, Color bgcolor, Intensity txt_intensity = normal, Intensity bg_intensity = normal) :
                txt_color_(txt_color),
                bgcolor_(bgcolor),
                txt_intensity_(txt_intensity),
                bg_intensity_(bg_intensity) {};

        friend std::ostream &operator<<(std::ostream &os, const set &_s);

    private:
        Color txt_color_, bgcolor_;
        Intensity txt_intensity_, bg_intensity_;
    };

}


#endif //CONSOLE_COLOR_SET_H
