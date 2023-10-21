#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

using std::cout;
using std::endl;

class Fixed{
private:
	int					value;
	static const int	fractionalBits;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif