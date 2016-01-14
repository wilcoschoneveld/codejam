cmake_minimum_required(VERSION 2.8)
project(codejam)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp)

add_subdirectory(lib/googletest)
add_subdirectory(tests)

add_executable(codejam ${SOURCE_FILES})