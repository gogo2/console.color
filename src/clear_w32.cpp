//
// file clear_w32.cpp
// Created by Bartek
//

#include "clear.h"
#include "Win32Handler.h"

namespace cc {

    std::ostream &clear(std::ostream &os) {
        COORD start = {0, 0};
        CONSOLE_SCREEN_BUFFER_INFO info;
        DWORD written;
        GetConsoleScreenBufferInfo(Win32Handler::outHandler, &info);
        FillConsoleOutputCharacterA(Win32Handler::outHandler, ' ',
                                    info.dwSize.X * info.dwSize.Y, start, &written);
        FillConsoleOutputAttribute(Win32Handler::outHandler, Win32Handler::getCurrentAttrs(),
                                   info.dwSize.X * info.dwSize.Y, start, &written);
        SetConsoleCursorPosition(Win32Handler::outHandler, start);
        return os;
    }

}
