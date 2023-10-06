#include "../inc/Zombie.hpp"

Zombie::~Zombie()
{
	cout << name << " destroyed" << endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}
