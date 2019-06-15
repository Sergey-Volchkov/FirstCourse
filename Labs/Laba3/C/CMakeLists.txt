cmake_minimum_required(VERSION 3.6)
project(Laba3C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES variant60.c)
set(PYTHON_FILES for_c.py)
add_executable(Laba3 ${SOURCE_FILES})
target_link_libraries(Laba3 m)
