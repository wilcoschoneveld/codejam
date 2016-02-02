#include "gtest/gtest.h"
#include "Wire.hpp"
#include "Intranet.hpp"

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

TEST(rope_intranet, sample_input) {
    Intranet a, b;

    a.connect(1, 10);
    a.connect(5, 5);
    a.connect(7, 7);

    EXPECT_EQ(2, a.countIntersections());

    b.connect(1, 1);
    b.connect(2, 2);

    EXPECT_EQ(0, b.countIntersections());
}