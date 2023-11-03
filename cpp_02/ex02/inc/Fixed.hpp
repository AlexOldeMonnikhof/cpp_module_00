#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

using std::cout;
using std::endl;
using std::ostream;

class Fixed{
private:
	int					value;
	static const int	fractionalBits;
public:
	Fixed();
	Fixed(const int input);
	Fixed(const float input);
	Fixed(const Fixed& other);
	~Fixed();
	Fixed&	operator=(const Fixed& other);
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	//comparison operators
	bool	operator>(Fixed other) const;
	bool	operator<(Fixed other) const;
	bool	operator>=(Fixed other) const;
	bool	operator<=(Fixed other) const;
	bool	operator==(Fixed other) const;
	bool	operator!=(Fixed other) const;
	//arithmetic operators
	float	operator+(Fixed other) const;
	float	operator-(Fixed other) const;
	float	operator*(Fixed other) const;
	float	operator/(Fixed other) const;
	//in- and decrements
	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	//min/max
	static Fixed&			min(Fixed& f1, Fixed& f2);
	static const Fixed&		min(const Fixed& f1, const Fixed& f2);
	static Fixed&			max(Fixed& f1, Fixed& f2);
	static const Fixed&		max(const Fixed& f1, const Fixed& f2);
};

ostream& operator<<(ostream& stream, const Fixed& other);


#endif