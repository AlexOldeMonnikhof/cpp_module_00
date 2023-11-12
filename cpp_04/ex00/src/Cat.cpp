#include "../inc/Cat.hpp"
#include "../inc/Animal.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "An " << type << " has been created." << std::endl;
}

Cat::~Cat()
{
	std::cout << "An " << type << " has been destroyed." << std::endl;
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
	std::cout << "Meow" << std::endl;;
}
