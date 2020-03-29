#include "gtest/gtest.h"
extern "C" {
    #include "LongestCommonSubsequence.h"
    #include <limits.h>
}


TEST(findLCSLength, _t0) {
    char x[] = "XMJYAUZ";
    char y[] = "MZJAWXU";
    ASSERT_EQ(findLCSLength(x, y, 7, 7), 4);
}


TEST(findLCSLength, _t1) {
    char x[] = "ABCDGH";
    char y[] = "AEDFHR";
    ASSERT_EQ(findLCSLength(x, y, 6, 6), 3);
}


TEST(findLCSLength, _t2) {
    char x[] = "AGGTAB";
    char y[] = "GXTXAYB";
    ASSERT_EQ(findLCSLength(x, y, 6, 7), 4);
}
