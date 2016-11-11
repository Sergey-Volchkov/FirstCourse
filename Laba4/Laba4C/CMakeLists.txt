cmake_minimum_required(VERSION 3.6)
project(Laba4)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES laba4.c)
add_executable(Laba4 ${SOURCE_FILES})
target_link_libraries(Laba4 m)