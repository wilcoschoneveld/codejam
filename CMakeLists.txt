cmake_minimum_required(VERSION 2.8)

project(codejam)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/Wire.cpp src/Intranet.cpp)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/include)

add_executable(codejam src/main.cpp ${SOURCE_FILES})
add_executable(tests src/tests.cpp ${SOURCE_FILES})

target_link_libraries(tests gtest gtest_main)