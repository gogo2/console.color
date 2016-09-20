project(console_color_lib)

set(LIB_FILES
        color.cpp
        set.cpp
        bgcolor.cpp
        brighten.cpp
        reset.cpp
        reset_color.cpp
        reset_bgcolor.cpp
        clear.cpp
        )

set(LIB_FILES_W32
        set_w32.cpp
        color_w32.cpp
        bgcolor_w32.cpp
        brighten_w32.cpp
        Win32Handler.cpp
        reset_w32.cpp
        reset_bgcolor_w32.cpp
        reset_color_w32.cpp
        clear_w32.cpp
        )

include_directories(../include)

if (WIN32)
    add_library(console_color_lib STATIC ${LIB_FILES_W32})
else ()
    add_library(console_color_lib STATIC ${LIB_FILES})
endif ()

set_target_properties(console_color_lib PROPERTIES LINKER_LANGUAGE CXX)