#include "Span.hpp"

int main()
{
    try
    {
        unsigned int    size = 1;
        Span            v(size);

        v.fillVector();
        //EXCEPTION
        std::cout << "longest span = " << v.longestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
    try
    {
        unsigned int    size = 5;
        Span            v(size);

        v.printVector();
        v.fillVector();
        v.printVector();
        std::cout << "shortest span = " << v.shortestSpan() << std::endl;
        std::cout << "longest span = " << v.longestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
    try
    {
        unsigned int    size = 3;
        Span            v(size);

        v.addNumber(1);
        v.addNumber(3);
        v.addNumber(3);
        //EXCEPTION
        v.addNumber(7);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
    try
    {
        unsigned int    size = 15000;
        Span            v(size);

        v.fillVector();
        // v.printVector();
        std::cout << "shortest span = " << v.shortestSpan() << std::endl;
        std::cout << "longest span = " << v.longestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
