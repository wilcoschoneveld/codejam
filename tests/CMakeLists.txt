set(TEST_FILES sanity.cpp)

add_executable(tests ${TEST_FILES})

target_link_libraries(tests gtest gtest_main)