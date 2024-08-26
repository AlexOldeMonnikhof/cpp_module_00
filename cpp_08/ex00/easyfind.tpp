#include "easyfind.hpp"

const char *NothingFoundException::what() const throw()
{
    return ("Error: value not found");
}

template <typename T>
void easyfind(T& container, int value)
{
    typename T::iterator iter;
    
    iter = std::find(container.begin(), container.end(), value);
    if (iter == container.end())
        throw(NothingFoundException());
    std::cout << *iter << " found in place " << std::distance(container.begin(), iter) << std::endl;
}
