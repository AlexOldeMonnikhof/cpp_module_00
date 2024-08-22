#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits.h>
# include <float.h>
# include <stdlib.h>

typedef enum e_type{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    WORD,
    NO_TYPE,
}   type;

class ScalarConverter{
private:
    ScalarConverter();
public:
    ~ScalarConverter();

    ScalarConverter(const ScalarConverter& other);

    ScalarConverter& operator=(const ScalarConverter& other);

    static e_type   findType(const std::string str);
    
    static bool isChar(const std::string str);
    static bool isInt(const std::string str);
    static bool isFloat(const std::string str);
    static bool isDouble(const std::string str);
    static bool isWord(const std::string str);
    
    static std::string getChar(int c);
    static void printInt(const std::string str);
    static void printChar(const std::string str);
    static void printFloatDouble(const std::string str);
    static void printWord(std::string str);
    static void convert(const std::string str);

};

#endif