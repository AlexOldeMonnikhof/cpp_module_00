#include "RPN.hpp"

void    calculate(std::string input, std::stack<double> &numbers)
{
    double top = 0;
    double second = 0;

    for (size_t i = 0; i < input.size(); i++)
	{
		char c = input[i];

		if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == 't' || c == '\v')
			continue;
		if (std::isdigit(c))
            numbers.push(c - '0');
        else if (c == '+')
        {
            if (numbers.size() < 2)
                throw std::runtime_error("Error: invalid input (wrong amount of numbers or operators)");
            top = numbers.top();
            numbers.pop();
            second = numbers.top();
            numbers.pop();
            numbers.push(second + top);
        }
        else if (c == '-')
        {
            if (numbers.size() < 2)
                throw std::runtime_error("Error: invalid input (wrong amount of numbers or operators)");
            top = numbers.top();
            numbers.pop();
            second = numbers.top();
            numbers.pop();
            numbers.push(second - top);
        }
        else if (c == '/')
        {
            if (numbers.size() < 2)
                throw std::runtime_error("Error: invalid input (wrong amount of numbers or operators)");
            top = numbers.top();
            numbers.pop();
            second = numbers.top();
            numbers.pop();
            numbers.push(second / top);
        }
        else if (c == '*')
        {
            if (numbers.size() < 2)
                throw std::runtime_error("Error: invalid input (wrong amount of numbers or operators)");
            top = numbers.top();
            numbers.pop();
            second = numbers.top();
            numbers.pop();
            numbers.push(second * top);
        }
        else
            throw std::runtime_error("Error: invalid input (invalid characters)");
	}
    if (numbers.size() != 1)
        throw std::runtime_error("Error: invalid input (wrong amount of numbers or operators)");
    std::cout << numbers.top() << std::endl;
}
