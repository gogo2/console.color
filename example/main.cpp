//
// file main.cpp
// Created by Bartek
//

#include <iostream>
#include "console_colors.h"

using namespace cc;

int main() {

    std::cout << color(red) << "Red text" << bgcolor(white, bright) << "now also on white background" << color(black)
              << "black text on white background\n";
    std::cout << set(yellow, green, bright, normal) << "brighten yellow text on green background" << reset << std::endl;

    std::cout << color(red) << "red text" << brighten << "now bright red text" << reset << std::endl;

    std::cout << set(blue, magenta, bright, bright) << "bright blue text on brighten magenta background\n";
    std::cout << reset_color << "default text on brighten magenta background\n";
    std::cout << reset_bgcolor << "default settings";

    std::cin.get();

    std::cout << bgcolor(cyan);
    std::cout << clear << "clearing screen fills screen with current background color\n\n";

    std::cout << color(red) << "Red text" << bgcolor(white) << "now also on gray background"
              << color(black)
              << "black text on gray background\n" << reset;

}