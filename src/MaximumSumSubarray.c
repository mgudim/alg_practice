#include "MaximumSumSubarray.h"

#include <limits.h>
#include <stdio.h>


void findMaximumSumSubarray(
    int* arr,
    size_t start,
    size_t end,
    SubarraySum* subarraySum
) {
    if (end == start + 1) {
        subarraySum->sum = arr[start];
        subarraySum->start = start;
        subarraySum->end = end;
        return;
    }
    size_t middle = (start + end) / 2;
    SubarraySum leftSubarraySum;
    SubarraySum rightSubarraySum;
    findMaximumSumSubarray(
        arr,
        start,
        middle,
        &leftSubarraySum
    );
    findMaximumSumSubarray(
        arr,
        middle,
        end,
        &rightSubarraySum
    );
    int leftMaxSum;
    size_t leftEndpointIndex = middle;
    if (middle > start) {
        int currentSum = 0;
        int maxSum = INT_MIN;
        for (int i = middle - 1; i > ((int)start) - 1; --i) {
            currentSum += arr[i];
            if (currentSum > maxSum) {
                maxSum = currentSum;
                leftEndpointIndex = i;
            }
        }
        leftMaxSum = maxSum;
    } else {
        leftMaxSum = 0;
    }

    int rightMaxSum;
    size_t rightEndpointIndex = middle;
    if (middle < end) {
        int currentSum = 0;
        int maxSum = INT_MIN;
        for (size_t i = middle; i < end; ++i) {
            currentSum += arr[i];
            if (currentSum > maxSum) {
                maxSum = currentSum;
                rightEndpointIndex = i;
            }
        }
        rightMaxSum = maxSum;
    } else {
        rightMaxSum = 0;
    }
    int maxSumCrossing = rightMaxSum + leftMaxSum;

    if (
        (maxSumCrossing > leftSubarraySum.sum)
        && (maxSumCrossing > rightSubarraySum.sum)
    ) {
        subarraySum->start = leftEndpointIndex;
        subarraySum->end = rightEndpointIndex + 1;
        subarraySum->sum = maxSumCrossing;
        return;
    } else if (leftSubarraySum.sum > rightSubarraySum.sum) {
        subarraySum->start = leftSubarraySum.start;
        subarraySum->end = leftSubarraySum.end;
        subarraySum->sum = leftSubarraySum.sum;
        return;
    } else {
        subarraySum->start = rightSubarraySum.start;
        subarraySum->end = rightSubarraySum.end;
        subarraySum->sum = rightSubarraySum.sum;
        return;
    }
    return;
}
