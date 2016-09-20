project(console_color_example)

set(SOURCE_FILES
        main.cpp
        )

include_directories(../include)

add_executable(console_color_example ${SOURCE_FILES})

target_link_libraries(console_color_example console_color_lib)
