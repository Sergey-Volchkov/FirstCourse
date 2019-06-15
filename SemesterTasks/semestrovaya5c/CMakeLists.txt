cmake_minimum_required(VERSION 3.6)
project(semestrovaya5c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES bl.c qdbmp.c)
add_executable(semestrovaya5c ${SOURCE_FILES})
target_link_libraries(semestrovaya5c m)