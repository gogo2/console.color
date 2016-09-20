//
// file Win32Handler.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_WIN32HANDLER_H
#define CONSOLE_COLOR_WIN32HANDLER_H

#include <Windows.h>
#include "colors.h"

namespace cc {

    struct Win32Handler {

        static HANDLE outHandler;

        static CONSOLE_SCREEN_BUFFER_INFO info;

        static const WORD default_attrs;

        static WORD getCurrentAttrs();

        static WORD getW32AttrWord(Color color, bool bright, bool bg);

        static WORD zeroColor();

        static WORD zeroBGColor();

        static const WORD w32_attrs[];
    };

}


#endif //CONSOLE_COLOR_WIN32HANDLER_H
