#include "../inc/HumanB.hpp"
#include "../inc/Weapon.hpp"

HumanB::HumanB(string name)
{
	this->name = name;
	this->weapon = nullptr;
}

HumanB::~HumanB()
{
	cout << name << " has died" << endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (weapon)
		cout << name << " attacks with their " << this->weapon->getType() << endl;
	else
		cout << name << " has no weapon so can not attack" << endl;
}
