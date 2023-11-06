#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : name("unnamed"), hp(100), energy(50), dmg(20)
{
	cout << "An unnamed ClapTrap has been created!" << endl;
}

ClapTrap::ClapTrap(string name) : name(name), hp(100), energy(50), dmg(20)
{
	cout << "A ClapTrap named "<< name << " has been created!" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap " << name << " has been destroyed!" << endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	cout << "Copy constructor has been called." << endl;
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
		cout << "ClapTrap " << name << " attacks " << target << " causing " << dmg << " points of damage!" << endl;
		energy--;
	}
	else if (hp == 0)
		cout << "ClapTrap " << name << " can not attack due to no hit points!" << endl;
	else
		cout << "ClapTrap " << name << " can not attack due to no energy points!" << endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
	{
		cout << name << " is already dead" << endl;
		return ;
	}
	else if (this->hp <= amount)
		cout << name << " has taken " << amount << " damage and died!" << endl;
	else
		cout << name << " has taken " << amount << " damage!" << endl;
	hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hp > 0 && energy > 0)
	{
		cout << name << " has repaired itself with " << amount << " hit points!" << endl;
		energy--;
		hp += amount;
	}
	else if (hp == 0)
		cout << name << " can not repair due to no hit points!" << endl;
	else
		cout << name << " can not repair due to no energy points!" << endl;
}
