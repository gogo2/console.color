//
// file main.cpp
// Created by Bartek
//

#include <iostream>
#include "console_colors.h"

using namespace cc;

int main() {

    std::cout << color(red) << "ddd" << bgcolor(white) << "asdfg";
    std::cout << set(yellow, green, true, false) << "dfdf" << reset << std::endl;

    std::cout << color(red) << "ffff" << bright << "gggggg" << reset << std::endl;

    std::cout << set(blue, magenta, true, true) << "aaaaaa" << reset_color << "bbbbbbb" << reset_bgcolor << "cccc"
              << std::endl;


}