#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal{
public:
//constructor
	Cat();
//destructor
	~Cat();
//methods
	void	makeSound() const;
	string	getType() const;
};

#endif