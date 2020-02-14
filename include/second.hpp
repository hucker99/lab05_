#ifndef INCLUDE_first_HPP_
#define INCLUDE_first_HPP_

#include <iostream>
#define stack_size 10

template <typename T>
class stack
{
    int64_t element_counter=stack_size-1;
    
public:
    T stack_contents[stack_size];
    
    void push(const T& value)
    {
        stack_size[element_counter]=value;
        element_counter--;
    }
    
    void push(T&& value)
    {
        stack_size[element_counter]=value;
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
