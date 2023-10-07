#include "../inc/Weapon.hpp"

Weapon::Weapon(string type)
{
	if (type.empty())
		setType("hands");
	else
		setType(type);
}

void	Weapon::setType(string type)
{
	this->type = type;
}

string	&Weapon::getType(void)
{
	return (type);
}
