#include "easyfind.hpp"
#include <vector>
int main()
{

    std::vector<int> vector1;
    std::vector<int> vector2;
    std::list<int> list1;

    for (size_t i = 0; i < 50; i++)
    {
        vector1.push_back(i * 4);
        vector2.push_back(i * 10);
        list1.push_back(i * 15);
    }
    try
    {
        ::easyfind(vector1, 84);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        ::easyfind(vector2, 11);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        ::easyfind(list1, 165);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
