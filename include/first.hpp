// Copyright 2018 You Name <your_email>

#ifndef INCLUDE_FIRST_HPP_
#define INCLUDE_FIRST_HPP_

#include <iostream>
#define SIZE_OF_STACK 10

template <typename T>
class stack
{
    int64_t element_counter = stack_size-1;
public:
    T stack_contents[SIZE_OF_STACK];
    void push(const T& value)
    {
        stack_contents[element_counter] = value;
        element_counter--;
    }
    void push(T&& value)
    {
        stack_contents[element_counter] = value;
        element_counter--;
    }
    T pop()
    {
        element_counter++;
        return stack_contents[element_counter];
    }
    const T& head() const
    {
        return stack_contents[element_counter+1];
    }
};


#endif // INCLUDE_HEADER_HPP_
