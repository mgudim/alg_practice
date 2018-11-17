#include "gtest/gtest.h"
extern "C" {
    #include "RodCutting.h"
}


TEST(FindOptimalCutsRecursionTest, GenericCase0) {
    unsigned int rodLength = 8;
    unsigned int numCuts = 8;
    unsigned int cutsLength[numCuts] = {1, 2, 3, 4, 5, 6, 7, 8};
    unsigned int cutsPrice[numCuts] = {1, 5, 8, 9, 10, 17, 17, 20};
    unsigned int res = findOptimalCutsRecursion(
        rodLength,
        cutsLength,
        cutsPrice,
        numCuts
    );
    ASSERT_EQ(res, 22);
}


TEST(FindOptimalCutsRecursionTest, GenericCase1) {
    unsigned int rodLength = 8;
    unsigned int numCuts = 8;
    unsigned int cutsLength[numCuts] = {1, 2, 3, 4, 5, 6, 7, 8};
    unsigned int cutsPrice[numCuts] = {3, 5, 8, 9, 10, 17, 17, 20};
    unsigned int res = findOptimalCutsRecursion(
        rodLength,
        cutsLength,
        cutsPrice,
        numCuts
    );
    ASSERT_EQ(res, 24);
}
