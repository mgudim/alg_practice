#include "gtest/gtest.h"
extern "C" {
    #include "BalancedBrackets.h"
}


TEST(AreBracketsBalancedTest, EmptyString) {
    const size_t numChars = 0;
    char str[numChars] = {};
    ASSERT_TRUE(areBracketsBalanced(str, numChars));
}


TEST(AreBracketsBalancedTest, GenericCase0) {
    const size_t numChars = 3;
    char str[numChars] = {'(', '(', ')'};
    ASSERT_FALSE(areBracketsBalanced(str, numChars));
}


TEST(AreBracketsBalancedTest, GenericCase1) {
    const size_t numChars = 4;
    char str[numChars] = {'(', '(', ')', ')'};
    ASSERT_FALSE(areBracketsBalanced(str, numChars));
}


TEST(AreBracketsBalancedTest, GenericCase2) {
    const size_t numChars = 3;
    char str[numChars] = {'(', ')', ')'};
    ASSERT_FALSE(areBracketsBalanced(str, numChars));
}
