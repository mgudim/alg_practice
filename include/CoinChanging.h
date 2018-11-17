#ifndef COIN_CHANGING
#define COIN_CHANGING
#include <stddef.h>
//Suppose we have k different denominations d_{k-1} > d_{k - 2} > ... > d_0 = 1
//and the smallest denomination d_0 is 1. The followwing function calculates the minimum
//number of coins needed to make change for targetNumber cents.
size_t findMinNumCoinsRequired(
    size_t targetNumber,
    size_t* denominations,
    size_t numDenominations
);


#endif
