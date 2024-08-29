#include "Array.hpp"

#define MAX_VAL 750

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
    std::cout << "\nsubject:" << std::endl;
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);

            //loop through test:
            for (int i = 0; i < 5; i++)
                std::cout << "numbers: " << numbers[i] << "\ttest: " << test[i] << std::endl;
            
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "changing numbers values again..." << std::endl;
        for (int i = 0; i < 5; i++)
        {
            numbers[i] = rand();
            std::cout << "numbers: " << numbers[i] << std::endl;
        }
        delete [] mirror;//
    }
    return 0;
}
