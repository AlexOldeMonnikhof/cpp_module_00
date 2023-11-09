#include "../inc/Cat.hpp"
#include "../inc/Animal.hpp"

Cat::Cat()
{
	type = "Cat";
	cout << "An " << type << " has been created." << endl;
}

Cat::~Cat()
{
	cout << "An " << type << " has been destroyed." << endl;
}

Cat::Cat(const Cat &other)
{
	type = other.type;
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

void	Cat::makeSound() const
{
	cout << "Meow" << endl;;
}
