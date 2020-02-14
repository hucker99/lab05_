// Copyright 2018 You Name <your_email>

#ifndef INCLUDE_SECOND_HPP_
#define INCLUDE_SECOND_HPP_

#include <iostream>
#define stack_size 10

template <typename T>
class Stack
{
    int64_t element_counter = stack_size-1; 
public:
    T stack_contents[stack_size];
    template <typename ... Args>
    void push_emplace(Args&&... value)
    {
        T obj(value...);
        stack_size[element_counter] = obj;
        element_counter--;
    }
    void push(T&& value)
    {
        stack_size[element_counter] = value;
        element_counter--;
    }
    T pop()
    {
        element_counter++;
        return stack_size[element_counter];
    }
    const T& head() const
    {
        return stack_size[element_counter+1];
    }
};


#endif // INCLUDE_HEADER_HPP_
