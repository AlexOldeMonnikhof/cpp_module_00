#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain{
private:
	std::string	ideas[100];
public:
//constructor
	Brain();
//destructor
	~Brain();
//copy constructor
	Brain(const Brain& other);
//assignment operator
	Brain&	operator=(const Brain& other);
//method
	std::string	getIdea(int i) const;
};

#endif