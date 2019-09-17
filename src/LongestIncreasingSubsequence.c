#include "LongestIncreasingSubsequence.h"
#include <limits.h>


static void findLISLengthEndingAtIndex(
    size_t index,
    int* arr,
    size_t* solutions
) {
    int value = arr[index];
    size_t maxLengthBefore = 0;
    for (size_t i = 0; i < index; ++i) {
        if (arr[i] < value) {
            if (solutions[i] > maxLengthBefore) {
                maxLengthBefore = solutions[i];
            }
        }
    }
    solutions[index] = maxLengthBefore + 1;
}


size_t findLISLengthDP(int* arr, size_t size) {
    if (size == 0) {
        return 0;
    }
    size_t solutions[size];
    size_t maxLISLength = 0;
    for (size_t i = 0; i < size; ++i) {
        findLISLengthEndingAtIndex(i, arr, solutions);
        if (solutions[i] > maxLISLength) {
            maxLISLength = solutions[i];
        }
    }
    return maxLISLength;
}
