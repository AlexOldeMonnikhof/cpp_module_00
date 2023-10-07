#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# include <iostream>

using std::string;
using std::cout;
using std::endl;

class HumanA{
private:
	string	name;
	Weapon	&weapon;
public:
	HumanA(string name, Weapon &weapon);
	~HumanA();
	void	attack();
};

#endif