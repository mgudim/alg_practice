#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "TestUtils.h"
extern "C" {
    #include "MaxCounters.h"
}


TEST(CalculateFinalValuesOfCountersTest, GenericCase0) {
    size_t numOps = 7;
    size_t numCounters = 5;
    size_t ops[numOps] = {2, 3, 3, 5, 0, 3, 3};
    size_t res[numCounters];
    for (size_t i = 0; i < numCounters; ++i) {
        res[i] = 0;
    }
    calculateFinalValuesOfCounters(
        ops,
        numOps,
        numCounters,
        res
    );
    size_t expected[numCounters] = {3, 2, 2, 4, 2};
    compareArrays(res, expected, numCounters);
}
