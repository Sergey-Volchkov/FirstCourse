cmake_minimum_required(VERSION 3.6)
project(semestrovaya2)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")
set(SOURCE_FILES main.c)
add_executable(semestrovaya2 ${SOURCE_FILES})