#include "SubsetWithGivenSum.h"
#include "libds/Hashing/HashTables.h"


bool hasTwoNumbersWithSum(
    const int* arr,
    size_t numElements,
    int targetSum
) {
    KeyValuePairNode bucketsArray[numElements];
    ChainedHashTableData chainedHashTableData;
    chainedHashTableData.bucketsArray = bucketsArray;
    chainedHashTableData.numBuckets = numElements;
    initializeBucketsArray(bucketsArray, &chainedHashTableData);
    KeyValuePairNode elements[numElements];
    for (size_t i = 0; i < numElements; ++i) {
        if (
            (size_t) findPrimeMod16Chained(targetSum - arr[i], &chainedHashTableData)
            == 1
        ) {
            return true;
        } else {
            elements[i].key = arr[i];
            elements[i].value = (void*) 1;
            insertPrimeMod16Chained(&elements[i], &chainedHashTableData);
        }
    }
    return false;
}
