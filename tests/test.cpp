// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "first.hpp"
#include "second.hpp"

TEST(Example, EmptyTest) {
    EXPECT_EQ(std::is_move_constructible<stack<int>>::value, true);
    EXPECT_EQ(std::is_move_assignable<stack<int>>::value, true);
    EXPECT_EQ(std::is_move_constructible<Stack<int>>::value, true);
    EXPECT_EQ(std::is_move_assignable<Stac2<int>>::value, true);
    stack <int> number;
    int a = 12;
    number.push(a);
    EXPECT_EQ(number.head(), 12);
    Stack <std::string> some_string;
    some_string.push("123");
    some_string.push("456");
    some_string.push("789");
    EXPECT_EQ((std::string) some_string.pop(), "789");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
