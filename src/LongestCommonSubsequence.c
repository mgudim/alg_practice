#include "LongestCommonSubsequence.h"
#include <limits.h>


unsigned fillSolnTableEntry(
    char* x,
    char* y,
    unsigned xInd,
    unsigned yInd,
    unsigned lenY,
    unsigned* solnTable
) {
    unsigned entry = solnTable[xInd * lenY + yInd];
    if (entry != UINT_MAX) {
        return entry;
    }
    if (x[xInd] == y[yInd]) {
        entry = (
            1
            + fillSolnTableEntry(
                x,
                y,
                xInd - 1,
                yInd - 1,
                lenY,
                solnTable
            )
        );
        solnTable[xInd * lenY + yInd] = entry;
        return entry;
    }
    unsigned xShortened = fillSolnTableEntry(
        x,
        y,
        xInd - 1,
        yInd,
        lenY,
        solnTable
    );
    unsigned yShortened = fillSolnTableEntry(
        x,
        y,
        xInd,
        yInd - 1,
        lenY,
        solnTable
    );
    entry = xShortened;
    if (yShortened > entry) {
        entry = yShortened;
    }

    solnTable[xInd * lenY + yInd] = entry;
    return entry;
}


unsigned findLCSLength(
    char* x,
    char* y,
    unsigned lenX,
    unsigned lenY
) {
    unsigned solnTable[(lenX + 1) * (lenY + 1)];
    for (unsigned i = 0; i < lenX + 1; ++i) {
        for (unsigned j = 0; j < lenY + 1; ++j) {
            solnTable[i * lenY + j] = UINT_MAX;
        }
    }
    for (unsigned i = 0; i < lenX; ++i) {
        solnTable[i * lenY] = 0;
    }
    for (unsigned j = 1; j < lenY; ++j) {
        solnTable[j] = 0;
    }
    return fillSolnTableEntry(
        x,
        y,
        lenX,
        lenY,
        lenY,
        solnTable
    );
}
