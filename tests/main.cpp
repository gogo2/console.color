//
// file main.cpp
// Created by Bartek
//

#include <iostream>
#include "console_colors.h"

using namespace cc;

int main() {

    std::cout << color(Color::red) << "ddd" << bgcolor(Color::white) << "asdfg" << set(yellow, green, true, false)
              << "dfdf"
              << end;


}