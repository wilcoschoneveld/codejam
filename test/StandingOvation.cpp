#include "gtest/gtest.h"
#include "../src/Audience.hpp"

TEST(standing_ovation, simple_audience) {
    Audience a("0"), b("01"), c("105"), d("100"), e("0000001");

    EXPECT_EQ(a.friendsRequired(), 0);
    EXPECT_EQ(b.friendsRequired(), 1);
    EXPECT_EQ(c.friendsRequired(), 1);
    EXPECT_EQ(d.friendsRequired(), 0);
    EXPECT_EQ(e.friendsRequired(), 6);
}

TEST(standing_ovation, sample_input) {
    std::ostringstream output;
    std::istringstream input("4\n"
                             "4 11111\n"
                             "1 09\n"
                             "5 110011\n"
                             "0 1");

    Audience::solve(input, output);

    EXPECT_EQ(output.str(), "Case #1: 0\n"
                            "Case #2: 1\n"
                            "Case #3: 2\n"
                            "Case #4: 0\n");
}