#include "../inc/Dog.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "An " << type << " has been created." << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "An " << type << " has been destroyed." << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	brain = new Brain();
	type = other.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
