#include "hashmap.hpp"
#include "gtest/gtest.h"

TEST(hashmap, get_set)
{
    dc::lock_free::HashMap<int, int> map;
    map[1] = 1;
    EXPECT_EQ(map[1], 1);
}

