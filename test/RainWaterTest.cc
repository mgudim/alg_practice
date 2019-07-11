#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <stddef.h>
#include "TestUtils.h"
extern "C" {
    #include "RainWater.h"
}


TEST(FindWaterTrappedTest, EmptyInput) {
    size_t size = 0;
    unsigned heights[size] = {};
    ASSERT_EQ(findWaterTrapped(heights, size), 0);
}


TEST(FindWaterTrappedTest, OneBarZeroHeight) {
    size_t size = 1;
    unsigned heights[size] = {0};
    ASSERT_EQ(findWaterTrapped(heights, size), 0);
}


TEST(FindWaterTrappedTest, ManyBarsZeroHeight) {
    size_t size = 5;
    unsigned heights[size];
    for (size_t i = 0; i < size; ++i) {
        heights[i] = 0;
    }
    ASSERT_EQ(findWaterTrapped(heights, size), 0);
}


TEST(FindWaterTrappedTest, OneBarNonZeroHeight) {
    size_t size = 1;
    unsigned heights[size] = {5};
    ASSERT_EQ(findWaterTrapped(heights, size), 0);
}


TEST(FindWaterTrappedTest, ManyBarsNonZeroHeight) {
    size_t size = 5;
    unsigned heights[size];
    for (size_t i = 0; i < size; ++i) {
        heights[i] = 3;
    }
    ASSERT_EQ(findWaterTrapped(heights, size), 0);
}


TEST(FindWaterTrappedTest, ZeroWaterTrapped0) {
    size_t size = 3;
    unsigned heights[size] = {2, 5, 3};
    ASSERT_EQ(findWaterTrapped(heights, size), 0);
}


TEST(FindWaterTrappedTest, ZeroWaterTrapped1) {
    size_t size = 3;
    unsigned heights[size] = {2, 3, 5};
    ASSERT_EQ(findWaterTrapped(heights, size), 0);
}


TEST(FindWaterTrappedTest, ZeroWaterTrapped2) {
    size_t size = 3;
    unsigned heights[size] = {5, 3, 2};
    ASSERT_EQ(findWaterTrapped(heights, size), 0);
}


TEST(FindWaterTrappedTest, SomeWaterTrapped0) {
    size_t size = 3;
    unsigned heights[size] = {5, 2, 3};
    ASSERT_EQ(findWaterTrapped(heights, size), 1);
}


TEST(FindWaterTrappedTest, SomeWaterTrapped1) {
    size_t size = 3;
    unsigned heights[size] = {3, 2, 5};
    ASSERT_EQ(findWaterTrapped(heights, size), 1);
}


TEST(FindWaterTrappedTest, SomeWaterTrapped2) {
    size_t size = 4;
    unsigned heights[size] = {3, 2, 2, 5};
    ASSERT_EQ(findWaterTrapped(heights, size), 2);
}


TEST(FindWaterTrappedTest, SomeWaterTrapped3) {
    size_t size = 5;
    unsigned heights[size] = {3, 2, 3, 2, 5};
    ASSERT_EQ(findWaterTrapped(heights, size), 2);
}


TEST(FindWaterTrappedTest, GenericCase0) {
    size_t size = 10;
    unsigned heights[size] = {7, 0, 4, 2, 5, 0, 6, 4, 0, 5};
    ASSERT_EQ(findWaterTrapped(heights, size), 25);
}
