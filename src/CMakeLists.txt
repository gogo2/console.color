project(console_color_lib)

set(LIB_FILES
        color.cpp
        bgcolor.cpp
        light.cpp
        bold.cpp
        end.cpp
        )

set(LIB_FILES_W32
        color_w32.cpp
        bgcolor_w32.cpp
        light_w32.cpp
        bold_w32.cpp
        end_w32.cpp
        )

if (WIN32)
    add_library(console_color_lib STATIC ${LIB_FILES_W32})
else ()
    add_library(console_color_lib STATIC ${LIB_FILES})
endif ()


include_directories(../include)
set_target_properties(console_color_lib PROPERTIES LINKER_LANGUAGE CXX)