#include "BalancedBrackets.h"


bool areBracketsBalanced(const char* str, size_t numChars) {
    int stackSize = 0;
    for (size_t i = 0; i < numChars; ++i) {
        switch (str[i]) {
            default: {
                return false;
            }
            case '(': {
                ++stackSize;
            }
            case ')': {
                --stackSize;
            }
        }
        if (stackSize < 0) {
            return false;
        }
    }
    return (stackSize == 0);
}
