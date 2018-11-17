#include "SubarrayWithGivenSum.h"


void findSubarrayWithGivenSumNonneg1D(
    const unsigned int* arr,
    size_t numElements,
    unsigned int targetSum,
    SubarrayEndpoints1D* subarrayEndpoints
) {
    size_t start = 0;
    size_t end = 0;
    size_t currentSum = 0;
    while (start < numElements) {
        if (currentSum == targetSum) {
            subarrayEndpoints->start = start;
            subarrayEndpoints->end = end;
            return;
        }
        if (currentSum < targetSum) {
            if (end == numElements) {
                return;
            }
            currentSum += arr[end];
            ++end;
        }
        if (currentSum > targetSum) {
            currentSum -= arr[start];
            ++start;
        }
    }
    return;
}
