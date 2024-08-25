#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class NothingFoundException : public std::exception
{
    public:
        const char *what() const throw();
};

template <typename T>
int easyfind(T& container, int value);

# include "easyfind.tpp"

#endif