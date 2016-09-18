project(console_color_tests)

set(SOURCE_FILES
        main.cpp
        )

set(SOURCE_FILES_W32
        main_w32.cpp)

include_directories(../include)

add_executable(console_color_tests ${SOURCE_FILES})
target_link_libraries(console_color_tests console_color_lib)

#[[
if (WIN32)
    add_executable(console_color_tests ${SOURCE_FILES_W32})
else ()
    add_executable(console_color_tests ${SOURCE_FILES})
endif ()]]
