#include <stddef.h>
template<class T> void compareArrays(
    T* res,
    T* expected,
    size_t numElements
) {
    for (size_t i = 0; i < numElements; ++i) {
        ASSERT_EQ(res[i], expected[i]);
    }
    return;
}
