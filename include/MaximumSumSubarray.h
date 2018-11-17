#ifndef MAXIMUM_SUM_SUBARRAY
#define MAXIMUM_SUM_SUBARRAY
#include <stddef.h>


//Given integer array arr, find the start and end index of subarray of a with the largest sum.
typedef struct SubarraySum {
    size_t start;
    size_t end;
    int sum;
} SubarraySum;


void findMaximumSumSubarray(
    int* arr,
    size_t startIndx,
    size_t end,
    SubarraySum* subarraySum
);


#endif
