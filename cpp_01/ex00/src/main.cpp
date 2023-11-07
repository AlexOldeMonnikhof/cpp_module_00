#include "../inc/Zombie.hpp"

int	main(void)
{
	std::string	n1 = "Fred";
	std::string	n2 = "Joost";

	Zombie	*zombie = newZombie(n1);
	zombie->announce();
	randomChump(n2);
	delete zombie;
	return (0);
}
