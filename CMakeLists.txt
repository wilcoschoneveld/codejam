cmake_minimum_required(VERSION 2.8)

project(codejam)

include(CTest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp)
set(TEST_FILES src/tests.cpp)

add_subdirectory(lib/googletest)

add_executable(codejam ${SOURCE_FILES})
add_executable(tests ${TEST_FILES})

target_link_libraries(tests gtest gtest_main)