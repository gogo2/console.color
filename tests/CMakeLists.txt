project(console_color_tests)

set(SOURCE_FILES
        main.cpp
        )

include_directories(../include)

add_executable(console_color_tests ${SOURCE_FILES})

target_link_libraries(console_color_tests console_color_lib)
