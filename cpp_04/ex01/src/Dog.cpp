#include "../inc/Dog.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	cout << "An " << type << " has been created." << endl;
}

Dog::~Dog()
{
	delete brain;
	cout << "An " << type << " has been destroyed." << endl;
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
	cout << "Woof" << endl;
}
