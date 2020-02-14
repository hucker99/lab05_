// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "first.hpp"

TEST(Example, EmptyTest) {
    stack <int> string;
    int a = 12;
    string.push(a);
    EXPECT_EQ(string.head(), 12);
}
