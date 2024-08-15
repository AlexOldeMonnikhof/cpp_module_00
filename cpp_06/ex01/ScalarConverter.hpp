#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits.h>
# include <float.h>

typedef enum e_type{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    WORD,
    NO_TYPE,
}   type;

class ScalarConverter{
protected:
    ScalarConverter();
public:
    ~ScalarConverter();

    ScalarConverter(const ScalarConverter& other);

    ScalarConverter& operator=(const ScalarConverter& other);

    static void convert(const std::string str);

};

    e_type   findType(const std::string str);

    bool isChar(const std::string str);
    bool isInt(const std::string str);
    bool isFloat(const std::string str);
    bool isDouble(const std::string str);
    bool isWord(const std::string str);

    std::string getChar(int c);
    void printInt(const std::string str);
    void printChar(const std::string str);
    void printFloatDouble(const std::string str);
    void printWord(std::string str);
#endif