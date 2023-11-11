#include "../inc/Cat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	cout << "An " << type << " has been created." << endl;
}

Cat::~Cat()
{
	delete brain;
	cout << "An " << type << " has been destroyed." << endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	brain = new Brain();
	type = other.type;
	return (*this);
}

void	Cat::makeSound() const
{
	cout << "Meow" << endl;
}
