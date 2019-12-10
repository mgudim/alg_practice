#include "MajorityElement.h"
#include "Stack/SDLL.h"
#include <stdio.h>
#include <limits.h>


int findMajorityElem(int* arr, unsigned size) {
    if (size == 0) {
        return -1;
    }
    int count = 0;
    int maj = INT_MIN;
    int majIdx = -1;
    for (unsigned i = 0; i < size; ++i) {
        int curr = arr[i];
        if (count == 0) {
            majIdx = i;
            maj = curr;
            ++count;
        }
        else {
            if (curr == maj) {
                ++count;
            }
            else {
                --count;
            }
        }
    }
    unsigned frequency = 0;
    for (unsigned i = 0; i < size; ++i) {
        if (arr[i] == maj) {
            ++frequency;
        }
    }
    if (frequency > (size / 2)) {
        return majIdx;
    }
    return -1;
}
