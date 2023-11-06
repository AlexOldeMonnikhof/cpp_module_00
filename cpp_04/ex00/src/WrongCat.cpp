#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	cout << "An " << type << " has been created." << endl;
}

WrongCat::~WrongCat()
{
	cout << "An " << type << " has been destroyed." << endl;
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
	cout << "A wrong meow" << endl;;
}
