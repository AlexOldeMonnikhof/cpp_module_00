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
	Fixed& operator=(const Fixed& other);
	~Fixed();
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

ostream& operator<<(ostream& stream, const Fixed& other);


#endif