cmake_minimum_required(VERSION 3.6)
project(semestrovaya4c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(semestrovaya4c ${SOURCE_FILES})
target_link_libraries(semestrovaya4c m)