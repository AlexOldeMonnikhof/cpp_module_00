#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return (*this);
}



bool    isChar(std::string str)
{
    if (str.size() == 1 && !isdigit(str[0]))
        return true;
    return false;
}

bool    isInt(std::string str)
{
    int i = 0;
    if (str[0] == '+' || str[0] == '-')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

bool    isFloat(std::string str)
{
    int i = 0;
    int dotCount = 0;
    int digitCount = 0;
    int fCount = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    for (; str[i]; i++)
    {
        if (str[i] == '.')
            dotCount++;
        else if (!isdigit(str[i]) && !(str[i] == 'f' && !str[i + 1]))
            return false;
        else if (isdigit(str[i]))
            digitCount++;
        else if (str[i] == 'f')
            fCount++;
    }
    if (digitCount == 0 || fCount != 1 || dotCount != 1)
        return false;
    return true;
}

bool    isDouble(std::string str)
{
    int i = 0;
    int dotCount = 0;
    int digitCount = 0;
    int fCount = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    for (; str[i]; i++)
    {
        if (str[i] == '.')
            dotCount++;
        else if (!isdigit(str[i]) && !(str[i] == 'f' && !str[i + 1]))
            return false;
        else if (isdigit(str[i]))
            digitCount++;
        else if (str[i] == 'f')
            fCount++;
    }
    if (digitCount == 0 || fCount > 0 || dotCount != 1)
        return false;
    return true;
}

bool    isWord(std::string str)
{

}

e_type  findType(const std::string str)
{
    if (isChar(str))
        return (CHAR);
    if (isInt(str))
        return (INT);
    if (isFloat(str))
        return (FLOAT);
    if (isDouble(str))
        return (DOUBLE);
    if (isWord(str))
        return (DOUBLE);
    return (NO_TYPE);
}

void ScalarConverter::convert(const std::string str)
{
    e_type  type = findType(str);
    
    switch (type)
    {
        case CHAR:
            std::cout << "CHAR" << std::endl;
            break;
        case INT:
            std::cout << "INT" << std::endl;
            break;
        case FLOAT:
            std::cout << "FLOAT" << std::endl;
            break;
        case DOUBLE:
            std::cout << "DOUBLE" << std::endl;
            break;
        case WORD:
            std::cout << "WORD" << std::endl;
            break;
        case NO_TYPE:
            std::cout << "NO_TYPE" << std::endl;
            break;
    }
    // std::cout << "type = " << type << std::endl;
    (void)type;
}
