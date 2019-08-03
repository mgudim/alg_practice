#include "SubwindowWithAtMostKZeroes.h"


size_t findMaximumWindowWithAtMostKZeroes(
    short* arr,
    size_t size,
    unsigned maxNumberZeroesAllowed
) {
    if (size == 0) {
        return 0;
    }
    unsigned leftIndex = 0;
    unsigned rightIndex = 0;
    unsigned thisWindowNumZeroes = 0;
    int maxWindowSize = 0;
    while (leftIndex < size) {
        while (rightIndex < size) {
            if (arr[rightIndex] == 0) {
                if (thisWindowNumZeroes == maxNumberZeroesAllowed) {
                    break;
                }
                ++thisWindowNumZeroes;
            }
            ++rightIndex;
        }
        int thisWindowSize = rightIndex - leftIndex;
        if (thisWindowSize > maxWindowSize) {
            maxWindowSize = thisWindowSize;
        }
        if(arr[leftIndex] ==0) {
            --thisWindowNumZeroes;
        }
        ++leftIndex;
    }
    return (size_t) maxWindowSize;
}
