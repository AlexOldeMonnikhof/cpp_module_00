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

void	FlagTrap::highFivesGuys(void)
{
	cout << "FlagTrap " << name << " wants some highfives!" << endl;
}
