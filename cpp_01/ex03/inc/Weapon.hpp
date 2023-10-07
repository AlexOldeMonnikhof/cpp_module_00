#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

using std::string;

class Weapon{
private:
	string	type;
public:
	Weapon(string type);
	string	&getType(void);
	void	setType(string type);
};

#endif