cmake_minimum_required(VERSION 3.6)
project(semestrovaya6c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES 3.c)
add_executable(semestrovaya6c ${SOURCE_FILES})
target_link_libraries(semestrovaya6c m)