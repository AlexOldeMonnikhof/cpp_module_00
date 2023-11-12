#include "../inc/Cat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "An " << type << " has been created." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "An " << type << " has been destroyed." << std::endl;
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
	std::cout << "Meow" << std::endl;
}
