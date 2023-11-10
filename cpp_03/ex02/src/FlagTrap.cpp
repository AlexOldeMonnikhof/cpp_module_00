#include "../inc/FlagTrap.hpp"
#include "../inc/ClapTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
	std::cout << "An unnamed FlagTrap has been created!" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	std::cout << "A FlagTrap named "<< name << " has been created!" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap " << name << " has been destroyed!" << std::endl;
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
	std::cout << "FlagTrap " << name << " wants some highfives!" << std::endl;
}
