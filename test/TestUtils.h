#ifndef TEST_UTILS
#define TEST_UTILS
#include <stddef.h>


template<class T> void compareArrays(
    T* res,
    T* expected,
    size_t numElements
);


#include "TestUtils.cc"
#endif
