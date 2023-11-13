#include "../inc/AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "basic animal";
	std::cout << "An basic animal has been created." << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "An basic animal has been destroyed." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	type = other.type;
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "Basic animal sounds" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (type);
}
