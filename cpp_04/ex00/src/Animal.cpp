#include "../inc/Animal.hpp"

Animal::Animal()
{
	type = "basic animal";
	cout << "An " << type << " has been created." << endl;
}

Animal::~Animal()
{
	cout << "An " << type << " has been destroyed." << endl;
}
