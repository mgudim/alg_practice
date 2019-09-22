#include "gtest/gtest.h"
#include <limits.h>
#include "TestUtils.h"
extern "C" {
    #include "AllNearestSmallerValues.h"
}


TEST(FindAllNearestSmallerValuesTest, GenericCase0) {
    size_t numElements = 16;
    int arr[numElements] = {
        0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15
    };
    int res[numElements];
    findAllNearestSmallerValues(
        arr,
        numElements,
        res
    );
    int expected[numElements] = {
        INT_MIN, 0, 0, 2, 0, 4, 4, 6, 0, 8, 8, 10, 8, 12, 12, 14
    };
    compareArrays(res, expected, numElements);
}
