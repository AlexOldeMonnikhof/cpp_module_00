#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "An " << type << " has been created." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "An " << type << " has been destroyed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	type = other.type;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "A wrong meow" << std::endl;;
}
