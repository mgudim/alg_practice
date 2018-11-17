#include "gtest/gtest.h"
extern "C" {
    #include "SubsetWithGivenSum.h"
}


TEST(HasTwoNumbersWithSumTest, GenericCasePositive0) {
    size_t numElements = 10;
    int targetSum = 0;
    int arr[numElements] = {
        0, 1, 2, 3, 4, 5, -4, 7, 8, 9
    };
    ASSERT_TRUE(hasTwoNumbersWithSum(arr, numElements, targetSum));
}


TEST(HasTwoNumbersWithSumTest, GenericCaseNegative0) {
    size_t numElements = 10;
    int targetSum = 0;
    int arr[numElements] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    ASSERT_FALSE(hasTwoNumbersWithSum(arr, numElements, targetSum));
}
