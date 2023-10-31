#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	cout << "An unnamed ClapTrap has been created!" << endl;
	this->name = "unnamed";
	hp = 10;
	energy = 10;
	dmg = 0;
}

ClapTrap::ClapTrap(string name)
{
	cout << "A ClapTrap named "<< name << " has been created!" << endl;
	this->name = name;
	hp = 10;
	energy = 10;
	dmg = 0;
}

ClapTrap::~ClapTrap()
{
	cout << name << " has been destroyed!" << endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (hp > 0 && energy > 0)
	{
		cout << name << " attacks " << target << " causing " << dmg << " points of damage!" << endl;
		energy--;
	}
	else if (hp == 0)
		cout << name << " can not attack due to no hit points!" << endl;
	else
		cout << name << " can not attack due to no energy points!" << endl;
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
