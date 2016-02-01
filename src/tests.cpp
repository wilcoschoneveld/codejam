#include "gtest/gtest.h"
#include "Wire.hpp"

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