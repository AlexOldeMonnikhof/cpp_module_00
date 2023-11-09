#include "../inc/Fixed.hpp"

const int	Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int input)
{
	value = input << fractionalBits;
}

//multiplying by 256 (1 << 8) but needing to brackets for proper typecast
Fixed::Fixed(const float input)
{
	value = roundf(input * (1 << fractionalBits));
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

//deviding by 256 (1 << 8) but needing to brackets for proper typecast
float	Fixed::toFloat(void) const
{
	return ((float)value / float(1 << fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractionalBits);
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

//comparison operators
bool	Fixed::operator>(Fixed other) const
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(Fixed other) const
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>=(Fixed other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<=(Fixed other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator==(Fixed other) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(Fixed other) const
{
	return (this->toFloat() != other.toFloat());
}

//arithmetic operators

float	Fixed::operator+(Fixed other) const
{
	return (this->toFloat() + other.toFloat());
}

float	Fixed::operator-(Fixed other) const
{
	return (this->toFloat() - other.toFloat());
}

float	Fixed::operator*(Fixed other) const
{
	return (this->toFloat() * other.toFloat());
}

float	Fixed::operator/(Fixed other) const
{
	return (this->toFloat() / other.toFloat());
}

//in- and decrements
//increment with no parameter == pre-increment
Fixed	Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	value--;
	return (*this);
}

//increment with parameter (int) == post-increment
Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	value--;
	return (tmp);
}

//min/max
Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	return (f2);
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	return (f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	return (f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	return (f2);
}

//show ints as floats since we dont know if we have an int or float
ostream&	operator<<(ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return (stream);
}
