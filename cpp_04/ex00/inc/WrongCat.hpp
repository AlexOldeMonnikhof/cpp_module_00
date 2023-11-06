#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
//constructor
	WrongCat();
//destructor
	~WrongCat();
//copy constructor
	WrongCat(const WrongCat &other);
//operator overload
	WrongCat& operator=(const WrongCat &other);
//methods
	void	makeSound() const;
};

#endif