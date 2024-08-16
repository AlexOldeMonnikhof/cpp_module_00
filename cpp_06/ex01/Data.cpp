#include "Data.hpp"

Data::Data() : value(42)
{
    
}

Data::Data(int value) : value(value)
{
    
}

Data::~Data()
{

}

Data::Data(const Data& other)
{
    *this = other;
}

Data& Data::operator=(const Data& other)
{
    if (this == &other)
        value = other.value;
    return (*this);
}

int    Data::getValue() const
{
    return value;
}
