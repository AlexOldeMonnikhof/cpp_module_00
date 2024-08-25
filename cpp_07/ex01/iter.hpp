#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> 
void iter(T *array, int length, void(*function)(T&))
{
    if (!array || !function)
        return ;
    for (int i = 0; i < length; i++)
        function(array[i]);
}

template <typename T> 
void print(T& string)
{
    std::cout << string << std::endl;
}

#endif