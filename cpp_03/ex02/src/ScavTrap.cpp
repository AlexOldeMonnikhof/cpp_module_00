#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), gateMode(false)
{
	std::cout << "An unnamed ScavTrap has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), gateMode(false)
{
	std::cout << "A ScavTrap named "<< name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "Copy constructor has been called." << std::endl;
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
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << dmg << " points of damage!" << std::endl;
		energy--;
	}
	else if (hp == 0)
		std::cout << "ScavTrap " << name << " can not attack due to no hit points!" << std::endl;
	else
		std::cout << "ScavTrap " << name << " can not attack due to no energy points!" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (gateMode == false)
	{
		std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
		gateMode = true;
	}
	else
	{
		std::cout << "ScavTrap " << name << " is now out of Gate keeper mode!" << std::endl;
		gateMode = false;
	}
}
