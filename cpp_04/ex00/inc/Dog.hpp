#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog{
public:
//constructor
	Dog();
//destructor
	~Dog();
//methods
	void	makeSound() const;
	string	getType() const;
};

#endif