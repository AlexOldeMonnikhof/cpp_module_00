#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), gateMode(false)
{
	cout << "An unnamed ScavTrap has been created!" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name), gateMode(false)
{
	cout << "A ScavTrap named "<< name << " has been created!" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap " << name << " has been destroyed!" << endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	cout << "Copy constructor has been called." << endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hp = other.hp;
		energy = other.energy;
		dmg = other.dmg;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (hp > 0 && energy > 0)
	{
		cout << "ScavTrap " << name << " attacks " << target << " causing " << dmg << " points of damage!" << endl;
		energy--;
	}
	else if (hp == 0)
		cout << "ScavTrap " << name << " can not attack due to no hit points!" << endl;
	else
		cout << "ScavTrap " << name << " can not attack due to no energy points!" << endl;
}

void	ScavTrap::guardGate()
{
	if (gateMode == false)
	{
		cout << "ScavTrap " << name << " is now in Gate keeper mode!" << endl;
		gateMode = true;
	}
	else
	{
		cout << "ScavTrap " << name << " is now out of Gate keeper mode!" << endl;
		gateMode = false;
	}
}
