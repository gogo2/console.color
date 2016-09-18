project(console_color_lib)

set(LIB_FILES
        )

add_library(console_color_lib STATIC ${LIB_FILES})
set_target_properties(console_color_lib PROPERTIES LINKER_LANGUAGE CXX)