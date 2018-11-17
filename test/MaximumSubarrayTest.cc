#include "gtest/gtest.h"
extern "C" {
    #include "MaximumSumSubarray.h"
}


TEST(FindMaximumSumSubarrayTest, TwoElement0) {
    size_t numElements = 2;
    size_t start = 0;
    size_t end = numElements;
    int arr[numElements] = {1, 2};
    SubarraySum subarraySum;
    findMaximumSumSubarray(
        arr,
        start,
        end,
        &subarraySum
    );
    ASSERT_EQ(subarraySum.sum, 3);
    ASSERT_EQ(subarraySum.start, 0);
    ASSERT_EQ(subarraySum.end, 2);
}


TEST(FindMaximumSumSubarrayTest, AllPositiveValues) {
    size_t numElements = 9;
    size_t start = 0;
    size_t end = numElements;
    int arr[numElements] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    SubarraySum subarraySum;
    findMaximumSumSubarray(
        arr,
        start,
        end,
        &subarraySum
    );
    ASSERT_EQ(subarraySum.sum, 45);
    ASSERT_EQ(subarraySum.start, 0);
    ASSERT_EQ(subarraySum.end, 9);
}


TEST(FindMaximumSumSubarrayTest, GenericCase1) {
    size_t numElements = 9;
    size_t start = 0;
    size_t end = numElements;
    int arr[numElements] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    SubarraySum subarraySum;
    findMaximumSumSubarray(
        arr,
        start,
        end,
        &subarraySum
    );
    ASSERT_EQ(subarraySum.sum, 6);
    ASSERT_EQ(subarraySum.start, 3);
    ASSERT_EQ(subarraySum.end, 7);
}
