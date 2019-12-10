
#include "gtest/gtest.h"
extern "C" {
    #include "MajorityElement.h"
}


TEST(MajorityElementTest, _0) {
    unsigned size = 0;
    int arr[size] = {};
    ASSERT_EQ(findMajorityElem(arr, size), -1);
}


TEST(MajorityElementTest, _1) {
    unsigned size = 1;
    int arr[size] = {0};
    ASSERT_EQ(findMajorityElem(arr, size), 0);
}


TEST(MajorityElementTest, _2) {
    unsigned size = 2;
    int arr[size] = {0, 1};
    ASSERT_EQ(findMajorityElem(arr, size), -1);
}


TEST(MajorityElementTest, _3) {
    unsigned size = 2;
    int arr[size] = {1, 1};
    ASSERT_EQ(arr[findMajorityElem(arr, size)], 1);
}


TEST(MajorityElementTest, _4) {
    unsigned size = 3;
    int arr[size] = {0, 1, 1};
    ASSERT_EQ(arr[findMajorityElem(arr, size)], 1);
}


TEST(MajorityElementTest, _5) {
    unsigned size = 3;
    int arr[size] = {1, 0, 1};
    ASSERT_EQ(arr[findMajorityElem(arr, size)], 1);
}


TEST(MajorityElementTest, _6) {
    unsigned size = 3;
    int arr[size] = {1, 1, 0};
    ASSERT_EQ(arr[findMajorityElem(arr, size)], 1);
}


TEST(MajorityElementTest, _7) {
    unsigned size = 9;
    int arr[size] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    ASSERT_EQ(arr[findMajorityElem(arr, size)], 4);
}


TEST(MajorityElementTest, _8) {
    unsigned size = 8;
    int arr[size] = {3, 3, 4, 2, 4, 4, 2, 4};
    ASSERT_EQ(findMajorityElem(arr, size), -1);
}
