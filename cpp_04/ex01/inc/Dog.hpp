#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
//constructor
	Dog();
//destructor
	~Dog();
//copy constructor
	Dog(const Dog& other);
//operator overload
	Dog& operator=(const Dog& other);
//methods
	void	makeSound() const;
};

#endif