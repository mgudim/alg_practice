#ifndef ROD_CUTTING
#define ROD_CUTTING


//A rod of length rodLength has to be cut into cuts. Each cut has a different length and price. Find maximum profit that can be obtained by cutting the rod. This is a recursive implementation.
unsigned findOptimalCutsRecursion(
    unsigned int rodLength,
    const unsigned int* cutsLength,
    const unsigned int* cutsPrice,
    size_t numCuts
);


#endif
