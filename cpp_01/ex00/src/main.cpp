#include "../inc/Zombie.hpp"

int	main(void)
{
	std::string	n1 = "Fred";
	std::string	n2 = "Joost";

	Zombie	*zombie = newZombie(n1);
	if (!zombie)
		cout << "Error creating " << n1 << endl;
	else
		zombie->announce();
	randomChump(n2);
	if (zombie)
		delete zombie;
	return (0);
}
