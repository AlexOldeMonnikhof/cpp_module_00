#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

# include <iostream>
# include <fstream>
# include <string>

class ShrubberyCreationForm : public AForm{
private:
	const std::string	target;

public:
//constructor
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);

//destructor
	virtual ~ShrubberyCreationForm();

//copy constructor
	ShrubberyCreationForm(const ShrubberyCreationForm& other);

//operator overload
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

//methods
	std::string	getTarget() const;
	void		executeForm() const;
};

#endif