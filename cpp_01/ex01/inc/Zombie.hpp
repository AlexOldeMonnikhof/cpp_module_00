#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

using std::cout;
using std::endl;

class	Zombie{
public:
	Zombie();
	~Zombie();
	void	set_name(std::string name);
	void	announce(void);
private:
	std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif