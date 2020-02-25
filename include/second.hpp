// Copyright 2018 You Name <your_email>

#ifndef INCLUDE_SECOND_HPP_
#define INCLUDE_SECOND_HPP_

#include <iostream>
#define SIZE_OF_STACK 10

class myClass
{
    int some_int;
    double some_double;
    std::string some_string;
public:
    myClass(){}
    myClass(int f1, double f2, std::string f3):some_int(f1), some_double(f2), some_string(f3)  //инициализация переменных
    {
        std::cout << "Done: " << some_int << ", " << some_double << ", " << some_string << std::endl;
    }
};


template <typename T>
class Stack
{
    int64_t element_counter=SIZE_OF_STACK-1;
    int current_pos=0;
public:
     T *stack_contents = new T[SIZE_OF_STACK];
    template <typename ... Args>
    
    
    void push_emplace(Args&&... value)
    {
        current_pos++;
        //T current_pos = head();
        if (current_pos>=SIZE_OF_STACK) stack_contents = (T *) realloc (stack_contents,current_pos+1);
        T obj(value...);
        stack_contents[element_counter] = obj;
        element_counter--;
        push(std::forward<T>(T(value...)));
    }
    
    void push(T&& value) //по значению (int a=2, передается 2)
    {
        current_pos++;
        if (current_pos>=SIZE_OF_STACK) stack_contents = (T *) realloc (stack_contents,current_pos+1);
        stack_contents[element_counter] = value;
        std::cout << "Element = " << stack_contents[element_counter] << std::endl;
        element_counter--;
    }
    
    T pop()
    {
        element_counter++;
        std::cout << "Element = " << stack_contents[element_counter] << std::endl;
        return stack_contents[element_counter];
    }
    
    const T& head() const
    {
        return stack_contents[element_counter+1];
    }
    ~Stack(){
    }
};


#endif // INCLUDE_SECOND_HPP_
