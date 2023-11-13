#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
protected:
	std::string type;
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
	void		makeSound() const;
	std::string	getType() const;
};

#endif