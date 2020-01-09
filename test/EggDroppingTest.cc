#include "gtest/gtest.h"
extern "C" {
    #include "EggDroping.h"
}


TEST(EggDroping, _0) {
    EXPECT_EQ(findMinNumDrops(1, 0), 1);
    EXPECT_EQ(findMinNumDrops(1, 10), 1);
    EXPECT_EQ(findMinNumDrops(10, 1), 10);
    EXPECT_EQ(findMinNumDrops(2, 2), 2);
    EXPECT_EQ(findMinNumDrops(2, 1), 2);
    EXPECT_EQ(findMinNumDrops(3, 2), 2);
}


TEST(EggDroping, _1) {
    EXPECT_EQ(findMinNumDrops(10, 2), 4);
    EXPECT_EQ(findMinNumDrops(36, 2), 8);
    EXPECT_EQ(findMinNumDrops(100, 2), 14);
    EXPECT_EQ(findMinNumDrops(1000, 3), 19);
}
