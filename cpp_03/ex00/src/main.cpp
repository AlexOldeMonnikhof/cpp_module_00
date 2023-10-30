#include "../inc/ClapTrap.hpp"

int	main()
{
	ClapTrap	c1;
	ClapTrap	c2("bob");

	c1.attack("john");
	c1.takeDamage(5);
	c1.takeDamage(5);
	c1.takeDamage(5);
	c2.takeDamage(4);
	for (size_t i = 0; i < 11; i++)
		c2.beRepaired(1);
	return (0);
}
