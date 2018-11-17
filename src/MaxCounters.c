#include "MaxCounters.h"


void calculateFinalValuesOfCounters(
    const size_t* ops,
    size_t numOps,
    size_t numCounters,
    size_t* res //assumes all counters are initialized to 0.
) {
    size_t currentMax = 0;
    size_t smallestArrValue = 0;
    for (size_t i = 0; i < numOps; i++) {
        size_t op = ops[i];
        if (op < numCounters) {
            if (res[op] < smallestArrValue) {
                res[op] = smallestArrValue + 1;
            } else {
                res[op] += 1;
            }
            if (res[op] > currentMax) {
                currentMax = res[op];
            }
        } else if (op == numCounters) {
            smallestArrValue = currentMax;
        }
    }
    for (size_t i = 0; i < numCounters; i++) {
        if (res[i] < smallestArrValue) {
            res[i] = smallestArrValue;
        }
    }
    return;
}
