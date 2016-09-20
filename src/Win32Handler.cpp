//
// file Win32Handler.cpp
// Created by Bartek
//

#include "Win32Handler.h"

namespace cc {

    HANDLE Win32Handler::outHandler = GetStdHandle(STD_OUTPUT_HANDLE);

    const WORD Win32Handler::default_attrs = Win32Handler::getCurrentAttrs();

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

    constexpr WORD Win32Handler::w32_attrs[];

}
