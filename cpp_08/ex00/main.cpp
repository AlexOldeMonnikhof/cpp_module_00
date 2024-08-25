#include "easyfind.hpp"
#include <vector>
int main()
{

    std::vector<int> vector1 = {42, 1337, 1000, 12345, -1337};
    try
    {
        std::cout << ::easyfind(vector1, 1000);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}