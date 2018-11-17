#ifndef MAX_COUNTERS
#define MAX_COUNTERS
#include <stddef.h>
//You are given numCounters counters initially set to 0, and you have two operations on them:
//  increase(x) - counter x is increased by 1
//  max_counter - all counters are set to the maximum value of any counter.
//
//A non-empty array ops of numOps integers is given. This array represents the consecutive operations:
//      if ops[i] = x such that 0 <= x < numCounters then the operation i is inrease(x),
//      if ops[i] = numCounters then the operation is max_counter
//
//The goal is to calculate the value of every counter after all operations in ops.


void calculateFinalValuesOfCounters(
    const size_t* ops,
    size_t numOps,
    size_t numCounters,
    size_t* res //assumes all counters are initialized to 0.
);


#endif
