#include "AllNearestSmallerValues.h"
#include <limits.h>


void findAllNearestSmallerValues(
    int* arr,
    size_t numElements,
    int* res
) {
    res[0] = INT_MIN;
    int j;
    int currentValue;
    for (size_t i = 1; i < numElements; ++i) {
        currentValue = arr[i];
        j = i - 1;
        while (arr[j] > currentValue) {
            j = res[j];
        }
        res[i] = j;
    }
    return;
}
