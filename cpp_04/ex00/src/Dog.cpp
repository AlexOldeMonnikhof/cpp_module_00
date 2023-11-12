#include "../inc/Dog.hpp"
#include "../inc/Animal.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "An " << type << " has been created." << std::endl;
}

Dog::~Dog()
{
	std::cout << "An " << type << " has been destroyed." << std::endl;
}

Dog::Dog(const Dog &other)
{
	type = other.type;
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;;
}
