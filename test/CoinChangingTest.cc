#include "gtest/gtest.h"
extern "C" {
    #include "CoinChanging.h"
}


TEST(findMinNumCoinsRequired, GenericCase0) {
    size_t targetNumber = 67;
    size_t numDenominations = 4;
    size_t denominations[numDenominations] = {1, 5, 10, 25};
    size_t minNumCoins = findMinNumCoinsRequired(
        targetNumber,
        denominations,
        numDenominations
    );
    ASSERT_EQ(minNumCoins, 6);
}
