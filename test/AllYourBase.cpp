#include "gtest/gtest.h"
#include "../src/Code.hpp"

TEST(all_your_base, test_one) {
    EXPECT_EQ(1, Code("a").getLowestNum());
    EXPECT_EQ(2, Code("a0").getLowestNum());
    EXPECT_EQ(7, Code("kkk").getLowestNum());
    EXPECT_EQ(5, Code("101").getLowestNum());
}

TEST(all_your_base, sample_input) {
    std::istringstream input("3\n11001001\ncats\nzig");
    std::ostringstream output;

    Code::solve(input, output);

    EXPECT_EQ(output.str(), "Case #1: 201\nCase #2: 75\nCase #3: 11\n");
}