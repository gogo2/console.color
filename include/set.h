//
// file set.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_SET_H
#define CONSOLE_COLOR_SET_H

#include <ostream>
#include "colors.h"

namespace cc {

    class set {
    public:
        set(Color txt_color, Color bgcolor, bool txt_bright = false, bool bg_bright = false) : txt_color_(txt_color),
                                                                                               bgcolor_(bgcolor),
                                                                                               txt_bright_(txt_bright),
                                                                                               bg_bright_(bg_bright) {};

        friend std::ostream &operator<<(std::ostream &os, const set &_s);

    private:
        Color txt_color_, bgcolor_;
        bool txt_bright_, bg_bright_;
    };

}


#endif //CONSOLE_COLOR_SET_H
