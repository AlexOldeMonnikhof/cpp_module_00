#include "../inc/Dog.hpp"
#include "../inc/Animal.hpp"

Dog::Dog()
{
	type = "Dog";
	cout << "An " << type << " has been created." << endl;
}

Dog::~Dog()
{
	cout << "An " << type << " has been destroyed." << endl;
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
	cout << "Woof" << endl;;
}
