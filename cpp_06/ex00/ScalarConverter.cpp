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
        if (!isdigit(str[i++]))
            return false;
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

    if (str[i] == '+' || str[i] == '-')
        i++;
    for (; str[i]; i++)
    {
        if (str[i] == '.')
            dotCount++;
        else if (isdigit(str[i]))
            digitCount++;
        else
            return false;
    }
    if (digitCount == 0 || dotCount != 1)
        return false;
    return true;
}

// can all be 1 if statement ofcourse this just looks better
bool    isWord(std::string str)
{
    //floats
    if (str == "-inff" || str == "+inff" || str == "inff" || str == "nanf")
        return true;
    //doubles
    if (str == "-inf" || str == "+inf" || str == "inf" || str == "nan")
        return true;
    return false;
}

e_type findType(const std::string str)
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
        return (WORD);
    return (NO_TYPE);
}

std::string getChar(int c)
{
    if (std::isprint(c))
        return ("\'" + std::string(1, static_cast<char>(c)) + "\'");
    return "Non displayable";
}

void   printChar(const std::string str)
{
    char c = str[0];
    std::cout << "char: \'" << c << "\'\n";
    std::cout << "int: " << static_cast<int>(c) << '\n';
    std::cout << "float: " << static_cast<float>(c) << ".0f\n";
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void   printInt(const std::string str)
{
    long long res = atoll(str.c_str());
    std::cout << "char: " << getChar(res) << '\n';
    if (res < INT_MIN || res > INT_MAX)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(res) << '\n';
    std::cout << "float: " << static_cast<float>(res) << ".0f\n";
    std::cout << "double: " << static_cast<double>(res) << ".0" << std::endl;
}

void   printFloatDouble(const std::string str)
{
    double res = atof(str.c_str());
    std::cout << "char: " << getChar(res) << '\n';
    if ((long)res < INT_MIN || (long)res > INT_MAX)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(res) << '\n';
    if (static_cast<int>(res) - res == 0)
    {
        std::cout << "float: " << static_cast<float>(res) << ".0f\n";
        std::cout << "double: " << res << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(res) << "f\n";
        std::cout << "double: " << res << std::endl;
    }
}

void   printWord(std::string str)
{
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    if (str == "-inff" || str == "+inff" || str == "inff" || str == "nanf")
    {
        std::cout << "float: " << str << '\n';
        std::cout << "double: " << str.erase(str.size() - 1) << std::endl;
    }
    else
    {
        std::cout << "float: " << str << "f\n";
        std::cout << "double: " << str << std::endl;
    }
}

void    ScalarConverter::convert(const std::string str)
{
    e_type  type = findType(str);
    
    switch (type)
    {
        case CHAR:
            printChar(str);
            break;
        case INT:
            printInt(str);
            break;
        case FLOAT:
            printFloatDouble(str);
            break;
        case DOUBLE:
            printFloatDouble(str);
            break;
        case WORD:
            printWord(str);
            break;
        case NO_TYPE:
            std::cout << "conversion is impossible" << std::endl;
            break;
    }
    (void)type;
}
