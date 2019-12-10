#include "SubsetWithGivenSum.h"
#include "libds/Hashing/CHT.h"
#include "libds/Hashing/HashingFunctions.h"


bool hasTwoNumbersWithSum(
    const int* arr,
    size_t numElements,
    int targetSum
) {
    unsigned numBuckets = (numElements / 4) + 1;
    LLNode buckets[numBuckets];
    HashingFunction hashFn = &getModPrime16;
    CHT cht;
    chtC(&cht, buckets, numBuckets, hashFn);
    KVPair kvs[numElements];
    LLNode kvPairNodes[numElements];
    for (size_t i = 0; i < numElements; ++i) {
        if (chtFind(&cht, (targetSum - arr[i])) != NULL) {
            return true;
        } else {
            kvs[i].key = arr[i];
            kvs[i].value = (void*) 1;
            kvPairNodes[i].data = (void*) &kvs[i];
            chtInsert(&cht, &kvPairNodes[i]);
        }
    }
    return false;
}
