#include "../inc/HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
	cout << name << " has died" << endl;
}

void	HumanA::attack()
{
	cout << name << " attacks with their " << this->weapon.getType() << endl;
}
