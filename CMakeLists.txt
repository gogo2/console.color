cmake_minimum_required(VERSION 2.8)
project(console_color)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -pedantic -Wall -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(src)
add_subdirectory(example)