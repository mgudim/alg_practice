#include "CoinChanging.h"
#include <limits.h>


#include <stdio.h>
static size_t findMinNumCoinsRequiredDynProg(
    size_t targetNumber,
    size_t* denominations,
    size_t numDenominations,
    size_t* solutions
) {

    if (solutions[targetNumber] < UINT_MAX) {
        return solutions[targetNumber];
    }
    size_t minNumCoins = UINT_MAX;
    for (size_t i = 0; i < numDenominations; ++i) {
        if (denominations[i] < targetNumber) {
            size_t thisNumCoins = (
                findMinNumCoinsRequiredDynProg(
                    targetNumber - denominations[i],
                    denominations,
                    numDenominations,
                    solutions
                )
                + 1
            );
            if (thisNumCoins < minNumCoins) {
                minNumCoins = thisNumCoins;
            }
        }
    }
    solutions[targetNumber] = minNumCoins;
    return minNumCoins;
}


size_t findMinNumCoinsRequired(
    size_t targetNumber,
    size_t* denominations,
    size_t numDenominations
) {
    size_t solutions[targetNumber + 1];
    solutions[0] = 0;
    for (size_t i = 1; i < targetNumber; ++i) {
        solutions[i] = UINT_MAX;
    }
    for (size_t i = 0; i < numDenominations; ++i) {
        solutions[denominations[i]] = 1;
    }
    return findMinNumCoinsRequiredDynProg(
        targetNumber,
        denominations,
        numDenominations,
        solutions
    );
}
