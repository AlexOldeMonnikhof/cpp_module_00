#include "RPN.hpp"

int main(int argc, char **argv)
{
	std::stack<double>	numbers;

    if (argc != 2)
    {
        std::cerr << "Error: wrong amount of arguments" << std::endl;
        return 1;
    }
    std::string input = argv[1];
    try
    {
        calculate(input, numbers);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
