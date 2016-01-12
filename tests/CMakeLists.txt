set(TEST_FILES sanity.cpp)

add_executable(codejam_tests ${TEST_FILES})

target_link_libraries(codejam_tests gtest gtest_main)