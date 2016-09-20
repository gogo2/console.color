//
// file Win32Handler.h
// Created by Bartek
//

#ifndef CONSOLE_COLOR_WIN32HANDLER_H
#define CONSOLE_COLOR_WIN32HANDLER_H

#include <Windows.h>
#include "enums.h"

namespace cc {

    struct Win32Handler {

        static HANDLE outHandler;

        static const WORD default_attrs;

        static WORD getCurrentAttrs();

        static WORD getW32AttrWord(Color color, Intensity intensity, bool bg);

        static constexpr WORD zeroColor() { return 240; }

        static constexpr WORD zeroBGColor() { return 15; }

        static constexpr WORD w32_attrs[] = {
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
    };

}


#endif //CONSOLE_COLOR_WIN32HANDLER_H
