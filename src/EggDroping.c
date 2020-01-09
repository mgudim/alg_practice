#include "EggDroping.h"
#include <limits.h>


static int numEggsTotal;


static int findMax(int x, int y) {
    if (x >= y) {
        return x;
    }
    return y;
}


static int solveMemoized(
    int numFloorsUnknown,
    int numEggsLeft,
    int* solns
) {
    if (numEggsLeft < 2) {
        return numFloorsUnknown;
    }
    if (numFloorsUnknown < 1) {
        return 0;
    }
    int solnIndex = numEggsTotal * numFloorsUnknown + numEggsLeft;
    int soln = solns[solnIndex];
    if (soln != INT_MAX) {
        return soln;
    }
    else {
        for (int i = 1; i < numFloorsUnknown + 1; ++i) {
            int thisFloorSoln = findMax(
                solveMemoized(
                    numFloorsUnknown - i,
                    numEggsLeft,
                    solns
                ),
                solveMemoized(
                    i - 1,
                    numEggsLeft - 1,
                    solns
                )
            );
            if (thisFloorSoln < soln) {
                soln = thisFloorSoln;
            }
        }
        ++soln;
    }
    solns[solnIndex] = soln;
    return soln;
}


int findMinNumDrops(int numFloors, int numEggs) {
    numEggsTotal = numEggs;
    int numElem = (numFloors + 1) * (numEggs + 1);
    int solns[numElem];
    for (unsigned i = 0; i < numElem; ++i) {
        solns [i] = INT_MAX;
    }
    return solveMemoized(numFloors, numEggs, solns);
}
