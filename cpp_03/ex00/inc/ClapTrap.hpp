#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap{
private:
	string			name;
	unsigned int	hp;
	unsigned int	energy;
	unsigned int	dmg;
public:
//constructors
	ClapTrap();
	ClapTrap(string name);
//destructor
	~ClapTrap();
//copy constructor
	ClapTrap(const ClapTrap& other);
//operator overload
	ClapTrap& operator=(const ClapTrap& other);
//methods
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif