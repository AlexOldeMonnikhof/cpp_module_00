#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int	main()
{
	ScavTrap scav1("john");
	ClapTrap clap2;

	clap2.attack("bob");
	for (size_t i = 0; i < 50; i++)
		scav1.attack("josh");
	scav1.guardGate();
	scav1.guardGate();
	return (0);
}
