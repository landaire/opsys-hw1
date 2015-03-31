cmake_minimum_required(VERSION 3.1)
project(hw1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c90")

set(SOURCE_FILES cscd340asgn1.c ints.c chars.c print_helper.c words.c)
set(HEADER_FILES chars.h ints.h words.h print_helper.h )
add_executable(hw1 ${SOURCE_FILES} ${HEADER_FILES})