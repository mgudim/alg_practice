#include "Knapsack01.h"
#include <stddef.h>
#include <limits.h>


static int findMaxValueDP(
    int* weights,
    int* values,
    int remCapacity,
    int itemsEnd,
    int maxCapacity,
    int* solutions
) {
    //printf("itemsEnd: %d\n", itemsEnd);
    //printf("remCapacity: %d\n", remCapacity);
    if (itemsEnd == 0) {
        return 0;
    }
    int thisSolutionIndex = itemsEnd * (maxCapacity + 1) + remCapacity;
    if (solutions[thisSolutionIndex] != -1) {
        return solutions[thisSolutionIndex];
    }

    int lastIncluded = INT_MIN;
    if (weights[itemsEnd - 1] <= remCapacity) {
        lastIncluded = values[itemsEnd - 1] + findMaxValueDP(
            weights,
            values,
            remCapacity - weights[itemsEnd - 1],
            itemsEnd - 1,
            maxCapacity,
            solutions
        );
    }
    int lastExcluded = findMaxValueDP(
        weights,
        values,
        remCapacity,
        itemsEnd - 1,
        maxCapacity,
        solutions
    );

    int thisSolution = lastExcluded;
    if (lastIncluded > lastExcluded) {
        thisSolution = lastIncluded;
    }
    solutions[thisSolutionIndex] = thisSolution;
    //printf("thisSolution: %d\n", thisSolution);
    return thisSolution;
}


int findMaxValueSubset(
    int* weights,
    int* values,
    int maxCapacity,
    int numItems
) {
    int tableSize = (numItems + 1) * (maxCapacity + 1);
    int solutions[tableSize];
    for (unsigned i = 0; i < tableSize; ++i) {
        solutions[i] = -1;
    }
    return findMaxValueDP(
        weights,
        values,
        maxCapacity,
        numItems,
        maxCapacity,
        solutions
    );
}
