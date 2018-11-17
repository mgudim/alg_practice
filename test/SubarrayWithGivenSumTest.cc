#include "gtest/gtest.h"
extern "C" {
    #include "SubarrayWithGivenSum.h"
}


TEST(FindSubarrayWithGivenSumNonneg1DTest, GenericCase0) {
    size_t numElements = 8;
    unsigned int arr[numElements] = {1, 5, 8, 9, 10, 17, 17, 20};
    unsigned int targetSum = 9 + 10 + 17;
    SubarrayEndpoints1D subarrayEndpoints;
    subarrayEndpoints.start = 1;
    subarrayEndpoints.end = 0;
    findSubarrayWithGivenSumNonneg1D(
        arr,
        numElements,
        targetSum,
        &subarrayEndpoints
    );
    ASSERT_EQ(subarrayEndpoints.start, 3);
    ASSERT_EQ(subarrayEndpoints.end, 6);
}


TEST(FindSubarrayWithGivenSumNonneg1DTest, GenericCase1) {
    size_t numElements = 8;
    unsigned int arr[numElements] = {1, 5, 8, 9, 10, 17, 17, 20};
    unsigned int targetSum = 1 + 5 + 8;
    SubarrayEndpoints1D subarrayEndpoints;
    subarrayEndpoints.start = 1;
    subarrayEndpoints.end = 0;
    findSubarrayWithGivenSumNonneg1D(
        arr,
        numElements,
        targetSum,
        &subarrayEndpoints
    );
    ASSERT_EQ(subarrayEndpoints.start, 0);
    ASSERT_EQ(subarrayEndpoints.end, 3);
}


TEST(FindSubarrayWithGivenSumNonneg1DTest, GenericCase2) {
    size_t numElements = 8;
    unsigned int arr[numElements] = {1, 5, 8, 9, 10, 17, 17, 20};
    unsigned int targetSum = 100;
    SubarrayEndpoints1D subarrayEndpoints;
    subarrayEndpoints.start = 1;
    subarrayEndpoints.end = 0;
    findSubarrayWithGivenSumNonneg1D(
        arr,
        numElements,
        targetSum,
        &subarrayEndpoints
    );
    ASSERT_EQ(subarrayEndpoints.start, 1);
    ASSERT_EQ(subarrayEndpoints.end, 0);
}


TEST(FindSubarrayWithGivenSumNonneg1DTest, GenericCase3) {
    size_t numElements = 8;
    unsigned int arr[numElements] = {1, 5, 3, 1, 10, 17, 4, 5};
    unsigned int targetSum = 1 + 10;
    SubarrayEndpoints1D subarrayEndpoints;
    subarrayEndpoints.start = 1;
    subarrayEndpoints.end = 0;
    findSubarrayWithGivenSumNonneg1D(
        arr,
        numElements,
        targetSum,
        &subarrayEndpoints
    );
    ASSERT_EQ(subarrayEndpoints.start, 3);
    ASSERT_EQ(subarrayEndpoints.end, 5);
}


TEST(FindSubarrayWithGivenSumNonneg1DTest, SpecialCase0) {
    size_t numElements = 8;
    unsigned int arr[numElements] = {1, 5, 3, 1, 10, 17, 4, 5};
    unsigned int targetSum = 17;
    SubarrayEndpoints1D subarrayEndpoints;
    subarrayEndpoints.start = 1;
    subarrayEndpoints.end = 0;
    findSubarrayWithGivenSumNonneg1D(
        arr,
        numElements,
        targetSum,
        &subarrayEndpoints
    );
    ASSERT_EQ(subarrayEndpoints.start, 5);
    ASSERT_EQ(subarrayEndpoints.end, 6);
}


TEST(FindSubarrayWithGivenSumNonneg1DTest, SpecialCase1) {
    size_t numElements = 8;
    unsigned int arr[numElements] = {1, 5, 3, 1, 10, 17, 4, 5};
    unsigned int targetSum = 1;
    SubarrayEndpoints1D subarrayEndpoints;
    subarrayEndpoints.start = 1;
    subarrayEndpoints.end = 0;
    findSubarrayWithGivenSumNonneg1D(
        arr,
        numElements,
        targetSum,
        &subarrayEndpoints
    );
    ASSERT_EQ(subarrayEndpoints.start, 0);
    ASSERT_EQ(subarrayEndpoints.end, 1);
}


TEST(FindSubarrayWithGivenSumNonneg1DTest, SpecialCase2) {
    size_t numElements = 2;
    unsigned int arr[numElements] = {1, 2};
    unsigned int targetSum = 2;
    SubarrayEndpoints1D subarrayEndpoints;
    subarrayEndpoints.start = 1;
    subarrayEndpoints.end = 0;
    findSubarrayWithGivenSumNonneg1D(
        arr,
        numElements,
        targetSum,
        &subarrayEndpoints
    );
    ASSERT_EQ(subarrayEndpoints.start, 1);
    ASSERT_EQ(subarrayEndpoints.end, 2);
}
