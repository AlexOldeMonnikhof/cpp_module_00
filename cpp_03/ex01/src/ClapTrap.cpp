#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : name("unnamed"), hp(100), energy(50), dmg(20)
{
	std::cout << "An unnamed ClapTrap has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(100), energy(50), dmg(20)
{
	std::cout << "A ClapTrap named "<< name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor has been called." << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
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

void	ClapTrap::attack(const std::string& target)
{
	if (hp > 0 && energy > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << dmg << " points of damage!" << std::endl;
		energy--;
	}
	else if (hp == 0)
		std::cout << "ClapTrap " << name << " can not attack due to no hit points!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " can not attack due to no energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
	{
		std::cout << name << " is already dead" << std::endl;
		return ;
	}
	else if (this->hp <= amount)
		std::cout << name << " has taken " << amount << " damage and died!" << std::endl;
	else
		std::cout << name << " has taken " << amount << " damage!" << std::endl;
	hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hp > 0 && energy > 0)
	{
		std::cout << name << " has repaired itself with " << amount << " hit points!" << std::endl;
		energy--;
		hp += amount;
	}
	else if (hp == 0)
		std::cout << name << " can not repair due to no hit points!" << std::endl;
	else
		std::cout << name << " can not repair due to no energy points!" << std::endl;
}
