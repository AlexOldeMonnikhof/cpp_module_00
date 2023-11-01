#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FlagTrap.hpp"

int	main()
{
	ScavTrap scav("john");
	ClapTrap clap("dirk");
	FlagTrap flag;

	clap.attack("bob");
	scav.guardGate();
	scav.guardGate();
	flag.attack("peter");
	flag.highFivesGuys();
	return (0);
}
