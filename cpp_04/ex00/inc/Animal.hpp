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
//method
	virtual void	makeSound() const;
};

#endif