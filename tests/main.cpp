//
// file main.cpp
// Created by Bartek
//

#include <iostream>

std::ostream &tt(std::ostream &os) {
    return os;
}

int main() {

    std::cout << "\x1b[31;42m;1" << "asdfghjk" << "\x1b[0m";


}