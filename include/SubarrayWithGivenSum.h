#ifndef SUBARRAY_WITH_GIVEN_SUM
#define SUBARRAY_WITH_GIVEN_SUM
#include <stddef.h>


//Given an array arr of non-negative integets  and a positive
//integer targetSum find start and end index of subarray with sum equal
//to targetSum
typedef struct SubarrayEndpoints1D {
    size_t start;
    size_t end;
} SubarrayEndpoints1D;

void findSubarrayWithGivenSumNonneg1D(
    const unsigned int* arr,
    size_t numElements,
    unsigned int targetSum,
    SubarrayEndpoints1D* subarrayEndpoints
);


#endif
