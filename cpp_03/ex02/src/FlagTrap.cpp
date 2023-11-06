#include "../inc/FlagTrap.hpp"
#include "../inc/ClapTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
	cout << "An unnamed FlagTrap has been created!" << endl;
}

FlagTrap::FlagTrap(string name) : ClapTrap(name)
{
	cout << "A FlagTrap named "<< name << " has been created!" << endl;
}

FlagTrap::~FlagTrap()
{
	cout << "FlagTrap " << name << " has been destroyed!" << endl;
}

FlagTrap::FlagTrap(const FlagTrap& other)
{
	*this = other;
}

FlagTrap&	FlagTrap::operator=(const FlagTrap& other)
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

void	FlagTrap::highFivesGuys(void)
{
	cout << "FlagTrap " << name << " wants some highfives!" << endl;
}
