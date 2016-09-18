cmake_minimum_required(VERSION 3.6)
project(Listing)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Listing12.c)
add_executable(Listing ${SOURCE_FILES})
target_link_libraries(Listing m)