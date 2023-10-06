#include "../inc/Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		N = 12;
	
	horde = zombieHorde(N, "John");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
