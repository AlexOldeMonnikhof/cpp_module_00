#include "../inc/Animal.hpp"

Animal::Animal()
{
	type = "basic animal";
	std::cout << "An basic animal has been created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "An basic animal has been destroyed." << std::endl;
}

Animal::Animal(const Animal& other)
{
	type = other.type;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Basic animal sounds" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
