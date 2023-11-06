#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "basic WrongAnimal";
	cout << "An basic WrongAnimal has been created." << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "An basic WrongAnimal has been destroyed." << endl;
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
	cout << "Basic WrongAnimal sounds" << endl;
}

string	WrongAnimal::getType() const
{
	return (type);
}
