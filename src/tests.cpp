#include "gtest/gtest.h"
#include "Wire.hpp"
#include "Intranet.hpp"
#include "Code.hpp"

TEST(sanity, test_eq) {
    EXPECT_EQ(1, 1);
}

TEST(sanity, test_neq) {
    EXPECT_NE(1, 0);
}

TEST(rope_intranet, wire_intersection) {
    Wire a(1, 5), b(3, 3), c(2, 6), d(10, 1);

    EXPECT_TRUE(a.intersects(b));
    EXPECT_TRUE(b.intersects(c));
    EXPECT_TRUE(b.intersects(d));

    EXPECT_FALSE(a.intersects(c));
}

TEST(rope_intranet, intranet_connections) {
    Intranet a, b, c;

    a.connect(1, 1);
    a.connect(5, 5);

    EXPECT_EQ(0, a.countIntersections());

    b.connect(1, 3);
    b.connect(2, 2);

    EXPECT_EQ(1, b.countIntersections());

    c.connect(1, 5);
    c.connect(2, 3);
    c.connect(4, 2);

    EXPECT_EQ(3, c.countIntersections());
}

TEST(rope_intranet, sample_input) {
    std::istringstream input("2\n3\n1 10\n5 5\n7 7\n2\n1 1\n2 2");
    std::ostringstream output;

    Intranet::solve(input, output);

    EXPECT_EQ(output.str(), "Case #1: 2\nCase #2: 0\n");
}

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