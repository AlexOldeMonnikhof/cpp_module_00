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
	virtual ~AAnimal();
//copy constructor
	AAnimal(const AAnimal& other);
//operator overload
	AAnimal&	operator=(const AAnimal& other);
//methods
	virtual void		makeSound() const = 0;
	virtual std::string	getType() const;
};

#endif