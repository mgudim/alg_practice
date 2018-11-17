//TODO: write problem statement.
//reconstruct the actual solution
#include <stddef.h>


unsigned findOptimalCutsRecursion(
    unsigned int rodLength,
    const unsigned int* cutsLength,
    const unsigned int* cutsPrice,
    size_t numCuts
) {
    unsigned int maxProfit = 0;
    unsigned int thisProfit = 0;
    for (size_t i = 0; i < numCuts; ++i) {
        if (cutsLength[i] <= rodLength) {
            thisProfit = (
                cutsPrice[i] +
                findOptimalCutsRecursion(
                    rodLength - cutsLength[i],
                    cutsLength,
                    cutsPrice,
                    numCuts
                )
            );
            if (thisProfit > maxProfit) {
                maxProfit = thisProfit;
            }
        }
    }
    return maxProfit;
}
