// Copyright 2018 You Name <your_email>

#ifndef INCLUDE_SECOND_HPP_
#define INCLUDE_SECOND_HPP_

#include <iostream>
#define SIZE_OF_STACK 10

template <typename T>
class Stack
{
    int64_t element_counter = SIZE_OF_STACK-1;
public:
     T *stack_contents = new T[SIZE_OF_STACK];
    template <typename ... Args>
    void push_emplace(Args&&... value)
    {
        T obj(value...);
        stack_contents[element_counter] = obj;
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


#endif // INCLUDE_SECOND_HPP_
