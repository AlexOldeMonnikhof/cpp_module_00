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
};

ostream& operator<<(ostream& stream, const Fixed& other);


#endif