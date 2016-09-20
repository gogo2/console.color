//
// file Win32Handler.cpp
// Created by Bartek
//

#include "Win32Handler.h"

namespace cc {

    HANDLE Win32Handler::outHandler = GetStdHandle(STD_OUTPUT_HANDLE);

    const WORD Win32Handler::default_attrs = Win32Handler::getCurrentAttrs();

    const WORD Win32Handler::w32_attrs[] = {
            0,                                                      //0
            FOREGROUND_RED,                                         //1
            FOREGROUND_GREEN,                                       //2
            FOREGROUND_RED | FOREGROUND_GREEN,                      //3
            FOREGROUND_BLUE,                                        //4
            FOREGROUND_RED | FOREGROUND_BLUE,                       //5
            FOREGROUND_GREEN | FOREGROUND_BLUE,                     //6
            FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,    //7

            0,                                                      //8
            BACKGROUND_RED,                                         //9
            BACKGROUND_GREEN,                                       //10
            BACKGROUND_RED | BACKGROUND_GREEN,                      //11
            BACKGROUND_BLUE,                                        //12
            BACKGROUND_RED | BACKGROUND_BLUE,                       //13
            BACKGROUND_GREEN | BACKGROUND_BLUE,                     //14
            BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,    //15

            FOREGROUND_INTENSITY,                                   //16
            BACKGROUND_INTENSITY                                    //17
    };

    WORD Win32Handler::getCurrentAttrs() {
        CONSOLE_SCREEN_BUFFER_INFO info;
        GetConsoleScreenBufferInfo(Win32Handler::outHandler, &info);
        return info.wAttributes;
    }

    WORD Win32Handler::getW32AttrWord(Color color, bool bright, bool bg) {
        WORD color_word = Win32Handler::w32_attrs[(int) color - (bg ? 22 : 30)];
        if (bright)
            color_word |= Win32Handler::w32_attrs[(bg ? 17 : 16)];
        return color_word;
    }

}
