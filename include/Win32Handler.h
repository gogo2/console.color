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

        static const WORD default_attrs;

        static WORD getCurrentAttrs();

        static WORD getW32AttrWord(Color color, bool bright, bool bg);

        static const WORD w32_attrs[];
    };

}


#endif //CONSOLE_COLOR_WIN32HANDLER_H
