#include "gtest/gtest.h"
extern "C" {
    #include "SubwindowWithAtMostKZeroes.h"
}


TEST(SubwindowWithAtMostKZeroesTest, Empty) {
    size_t size = 0;
    short arr[size] = {};
    unsigned maxNumberZeroesAllowed = 1;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        0
    );
}


TEST(SubwindowWithAtMostKZeroesTest, OneElement0) {
    size_t size = 1;
    short arr[size] = {1};
    unsigned maxNumberZeroesAllowed = 0;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        1
    );
}


TEST(SubwindowWithAtMostKZeroesTest, OneElement1) {
    size_t size = 1;
    short arr[size] = {0};
    unsigned maxNumberZeroesAllowed = 1;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        1
    );
}


TEST(SubwindowWithAtMostKZeroesTest, OneElement2) {
    size_t size = 1;
    short arr[size] = {0};
    unsigned maxNumberZeroesAllowed = 0;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        0
    );
}


TEST(SubwindowWithAtMostKZeroesTest, TwoElements0) {
    size_t size = 2;
    short arr[size] = {0, 0};
    unsigned maxNumberZeroesAllowed = 0;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        0
    );
}


TEST(SubwindowWithAtMostKZeroesTest, TwoElements1) {
    size_t size = 2;
    short arr[size] = {0, 0};
    unsigned maxNumberZeroesAllowed = 1;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        1
    );
}


TEST(SubwindowWithAtMostKZeroesTest, TwoElements2) {
    size_t size = 2;
    short arr[size] = {0, 0};
    unsigned maxNumberZeroesAllowed = 2;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        2
    );
}


TEST(SubwindowWithAtMostKZeroesTest, TwoElements3) {
    size_t size = 2;
    short arr[size] = {0, 1};
    unsigned maxNumberZeroesAllowed = 1;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        2
    );
}


TEST(SubwindowWithAtMostKZeroesTest, TwoElements4) {
    size_t size = 2;
    short arr[size] = {0, 1};
    unsigned maxNumberZeroesAllowed = 0;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        1
    );
}


TEST(SubwindowWithAtMostKZeroesTest, TwoElements5) {
    size_t size = 2;
    short arr[size] = {1, 0};
    unsigned maxNumberZeroesAllowed = 0;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        1
    );
}


TEST(SubwindowWithAtMostKZeroesTest, GenericCase0) {
    size_t size = 10;
    short arr[size] = {0, 1, 1, 1, 0, 0, 1, 0, 1, 0};
    unsigned maxNumberZeroesAllowed = 2;
    ASSERT_EQ(
        findMaximumWindowWithAtMostKZeroes(arr, size, maxNumberZeroesAllowed),
        6
    );
}
