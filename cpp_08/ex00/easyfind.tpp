#include "easyfind.hpp"

const char *NothingFoundException::what() const throw()
{
    return ("Error: no container found");
}

template <typename T>
int easyfind(T& container, int value)
{
    typename T::iterator iter;
    
    iter = std::find(container.begin(), container.end(), value);
    if (iter == container.end())
        throw(NothingFoundException());
    return *iter;
}
