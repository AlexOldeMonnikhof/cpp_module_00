#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

# include <iostream>
# include <fstream>
# include <string>

class AForm;

class ShrubberyCreationForm : public AForm{
private:
	const std::string	target;

public:
//constructor
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);

//destructor
	~ShrubberyCreationForm();

//copy constructor
	ShrubberyCreationForm(const ShrubberyCreationForm& other);

//operator overload
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

//methods
	std::string	getTarget() const;
	void		execute(Bureaucrat const& executor) const;
};

#endif