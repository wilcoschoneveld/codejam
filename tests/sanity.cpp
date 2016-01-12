#include "gtest/gtest.h"

TEST(sanity, test_eq) {
    EXPECT_EQ(1, 1);
}

TEST(sanity, test_neq) {
    EXPECT_NE(1, 0);
}