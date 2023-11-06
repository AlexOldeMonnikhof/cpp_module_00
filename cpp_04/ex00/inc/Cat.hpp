#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal{
public:
//constructor
	Cat();
//destructor
	~Cat();
//copy constructor
	Cat(const Cat &other);
//operator overload
	Cat& operator=(const Cat &other);
//methods
	void	makeSound() const;
};

#endif