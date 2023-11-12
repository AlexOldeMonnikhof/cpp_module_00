#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "basic WrongAnimal";
	std::cout << "An basic WrongAnimal has been created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An basic WrongAnimal has been destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	type = other.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Basic WrongAnimal sounds" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}
