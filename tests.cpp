#include "gtest/gtest.h"
#include "lib.h"

TEST(find_aray_sum, expected_aray_sum)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[4] = {2, 1, 3, 4};
    int arr3[10] = {1, 1, 1, 1, 1, 1,1,1,1,1};

    EXPECT_EQ(sum(5,arr), 15);
    EXPECT_EQ(sum(4,arr2), 10);
    EXPECT_EQ(sum(10,arr3), 10);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
