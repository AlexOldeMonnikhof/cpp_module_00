#include "../inc/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	cout << "An " << type << " has been created." << endl;
}

Cat::~Cat()
{
	cout << "An " << type << " has been destroyed." << endl;
}
