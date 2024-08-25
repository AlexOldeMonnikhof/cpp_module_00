#include "Array.hpp"

int main()
{
    std::cout << "integer array:" << std::endl;
    try
    {
        unsigned int size = 5;
    
        Array<int> ints(size);

        //init
        for (size_t i = 0; i < size; i++)
            ints[i] = i * 10;

        //print    
        for (size_t i = 0; i < size; i++)
            std::cout << ints[i] << std::endl;

        //out of bounds exception
        ints[5] = 42;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\ncharacter array:" << std::endl;
    try
    {
        unsigned int size = 26;

        Array<char> chars(size);

        //init
        for (size_t i = 0; i < size; i++)
            chars[i] = i + 'a';

        //print    
        for (size_t i = 0; i < size; i++)
            std::cout << chars[i];
        std::cout << std::endl;

    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\nstring array:" << std::endl;
    try
    {
        unsigned int size = 3;
        
        std::string names[] = {"Bob", "Dylan", "John"};

        Array<std::string> strings(size);
        
        //init
        for (size_t i = 0; i < size; i++)
            strings[i] = names[i];

        //print and exception (size + 1)
        for (size_t i = 0; i < size + 1; i++)
            std::cout << strings[i] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
