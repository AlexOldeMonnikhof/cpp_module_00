#include "Data.hpp"

Data::Data()
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

unsigned int    Data::getValue() const
{
    return value;
}

void    Data::setValue(unsigned int value)
{
    this->value = value;
}
