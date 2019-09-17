#include "gtest/gtest.h"
extern "C" {
    #include "LongestIncreasingSubsequence.h"
}


TEST(findLISLengthDPTest, GenericCase0) {
    size_t size = 16;
    int arr[size] = {
        0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15
    };
    ASSERT_EQ(findLISLengthDP(arr, size), 6);
}
