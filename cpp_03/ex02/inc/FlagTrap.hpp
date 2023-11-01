#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap{
public:
//constructors
	FlagTrap();
	FlagTrap(string name);
//destructorr
	~FlagTrap();
//method
	void	highFivesGuys(void);
};


#endif