#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap{
private:
	string	name;
	int		hp;
	int		energy;
	int		dmg;
public:
	ClapTrap(string name);
	~ClapTrap();
}

#endif