#include "gtest/gtest.h"
extern "C" {
    #include "Knapsack01.h"
}


TEST(Knapsack01, Empty) {
    int numItems = 0;
    int weights[numItems] = {};
    int values[numItems] = {};
    int maxWeight = 5;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 0);
}

TEST(Knapsack01, One0) {
    int numItems = 1;
    int weights[numItems] = {2};
    int values[numItems] = {3};
    int maxWeight = 4;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 3);
}

TEST(Knapsack01, One1) {
    int numItems = 1;
    int weights[numItems] = {2};
    int values[numItems] = {3};
    int maxWeight = 1;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 0);
}

TEST(Knapsack01, Two0) {
    int numItems = 2;
    int weights[numItems] = {1, 2};
    int values[numItems] = {3, 4};
    int maxWeight = 4;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 7);
}

TEST(Knapsack01, Two1) {
    int numItems = 2;
    int weights[numItems] = {1, 2};
    int values[numItems] = {3, 4};
    int maxWeight = 2;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 4);
}

TEST(Knapsack01, Two2) {
    int numItems = 2;
    int weights[numItems] = {1, 2};
    int values[numItems] = {3, 4};
    int maxWeight = 3;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 7);
}

TEST(Knapsack01, Three0) {
    int numItems = 3;
    int weights[numItems] = {1, 2, 3};
    int values[numItems] = {6, 10, 12};
    int maxWeight = 5;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 22);
}

TEST(Knapsack01, Three1) {
    int numItems = 3;
    int weights[numItems] = {3, 2, 1};
    int values[numItems] = {12, 10, 6};
    int maxWeight = 5;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 22);
}

TEST(Knapsack01, GenericCase1) {
    int numItems = 4;
    int weights[numItems] = {5, 4, 6, 3};
    int values[numItems] = {1, 4, 3, 5};
    int maxWeight = 10;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 9);
}

TEST(Knapsack01, GenericCase2) {
    int numItems = 10;
    int weights[numItems] = {23, 26, 20, 18, 32, 27, 29, 26, 30, 27};
    int values[numItems] = {505, 352, 458, 220, 354, 414, 498, 545, 473, 543};
    int maxWeight = 67;
    ASSERT_EQ(findMaxValueSubset(weights, values, maxWeight, numItems), 1270);
}
