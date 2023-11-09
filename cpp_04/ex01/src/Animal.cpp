#include "../inc/Animal.hpp"

Animal::Animal()
{
	type = "basic animal";
	cout << "An basic animal has been created." << endl;
}

Animal::~Animal()
{
	cout << "An basic animal has been destroyed." << endl;
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
	cout << "Basic animal sounds" << endl;
}

string	Animal::getType() const
{
	return (type);
}
