#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class Brain{
private:
	string	ideas[100];
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
	string	getIdea(int i) const;
};

#endif