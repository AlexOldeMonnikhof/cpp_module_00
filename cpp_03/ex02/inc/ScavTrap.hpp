#ifndef SCAVTRAP_CPP
# define SCAVTRAP_CPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:
	bool	gateMode;
public:
//constructors
	ScavTrap();
	ScavTrap(string name);
//destructorr
	~ScavTrap();
//method
	void	attack(const std::string& target);
	void	guardGate();
};


#endif