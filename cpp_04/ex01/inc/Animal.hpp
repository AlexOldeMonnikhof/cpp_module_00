#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
protected:
	std::string type;
public:
//constructor
	Animal();
//destructor
	virtual ~Animal();
//copy constructor
	Animal(const Animal& other);
//operator overload
	Animal&	operator=(const Animal& other);
//methods
	virtual void		makeSound() const;
	virtual std::string	getType() const;
};

#endif