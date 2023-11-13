#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal{
protected:
	std::string type;
public:
//constructor
	AAnimal();
//destructor
	virtual ~AAnimal() = 0; // pure virtual
//copy constructor
	AAnimal(const AAnimal& other);
//operator overload
	AAnimal&	operator=(const AAnimal& other);
//methods
	virtual void		makeSound() const;
	virtual std::string	getType() const;
};

#endif