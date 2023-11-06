#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal{
protected:
	string type;
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
	virtual void	makeSound() const;
	virtual string	getType() const;
};

#endif