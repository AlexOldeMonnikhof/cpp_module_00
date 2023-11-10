#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap{
public:
//constructors
	FlagTrap();
	FlagTrap(std::string name);
//destructor
	~FlagTrap();
//copy constructor
	FlagTrap(const FlagTrap& other);
//operator overfloat
	FlagTrap& operator=(const FlagTrap& other);
//method
	void	highFivesGuys(void);
};


#endif