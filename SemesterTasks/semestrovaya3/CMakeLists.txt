cmake_minimum_required(VERSION 3.6)
project(semestrovaya3)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -fopenmp")

set(SOURCE_FILES main.c)
add_executable(semestrovaya3 ${SOURCE_FILES})
target_link_libraries(semestrovaya3 gomp)