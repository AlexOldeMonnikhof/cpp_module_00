#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

# include <iostream>
# include <fstream>
# include <string>

class PresidentialPardonForm : public AForm{
private:
	const std::string	target;

public:
//constructor
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);

//destructor
	virtual ~PresidentialPardonForm();

//copy constructor
	PresidentialPardonForm(const PresidentialPardonForm& other);

//operator overload
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

//methods
	std::string	getTarget() const;
	void		executeForm() const;
};

#endif