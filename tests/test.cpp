// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "first.hpp"

TEST(Example, EmptyTest) {
    stack <int> string;
    int a = 12;
    string.push(a);
    EXPECT_EQ(string.head(), 12);
    Stack <std::string> some_string;
    some_string.push("123");
    some_string.push("456");
    some_string.push("789");
    EXPECT_EQ((std::string) x.pop(), "789");
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
