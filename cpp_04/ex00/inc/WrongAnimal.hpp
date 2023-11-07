#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal{
protected:
	string type;
public:
//constructor
	WrongAnimal();
//destructor
	virtual ~WrongAnimal();
//copy constructor
	WrongAnimal(const WrongAnimal& other);
//operator overload
	WrongAnimal&	operator=(const WrongAnimal& other);
//methods
	virtual void	makeSound() const;
	virtual string	getType() const;
};

#endif