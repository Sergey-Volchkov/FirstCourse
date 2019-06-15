cmake_minimum_required(VERSION 3.6)
project(Labs2C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Variant60.c)
add_executable(Labs2C ${SOURCE_FILES})
target_link_libraries(Labs2C m)