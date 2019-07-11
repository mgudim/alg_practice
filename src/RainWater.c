#include <stdio.h>
#include "RainWater.h"


unsigned findWaterTrapped(unsigned* heights, size_t size) {
    unsigned maxHeight = 0;
    size_t prevMaxIndex = 0;

    size_t leftMaxHeightIndex[size];
    for (unsigned i = 0; i < size; ++i) {
        leftMaxHeightIndex[i] = prevMaxIndex;
        if (heights[i] > maxHeight) {
            prevMaxIndex = i;
            maxHeight = heights[i];
        }
    }

    maxHeight = 0;
    prevMaxIndex = size - 1;
    size_t rightMaxHeightIndex[size];
    for (int i = size - 1; i > -1; i--) {
        rightMaxHeightIndex[i] = prevMaxIndex;
        if (heights[i] > maxHeight) {
            prevMaxIndex = i;
            maxHeight = heights[i];
        }
    }

    int totalWaterTrapped = 0;
    for (unsigned i = 0; i < size; ++i) {
        unsigned thisPoolHeight = heights[leftMaxHeightIndex[i]];
        if (thisPoolHeight > heights[rightMaxHeightIndex[i]]) {
            thisPoolHeight = heights[rightMaxHeightIndex[i]];
        }
        int thisWaterTrapped = thisPoolHeight - heights[i];
        if (thisWaterTrapped < 0) {
            thisWaterTrapped = 0;
        }
        totalWaterTrapped += thisWaterTrapped;
        printf("%d\n", totalWaterTrapped);
    }

    return (unsigned) totalWaterTrapped;
}
