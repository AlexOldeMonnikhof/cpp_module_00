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
//destructor
	~ScavTrap();
//copy constructor
	ScavTrap(const ScavTrap& other);
//operator overload
	ScavTrap& operator=(const ScavTrap& other);
//method
	void	attack(const std::string& target);
	void	guardGate();
};


#endif