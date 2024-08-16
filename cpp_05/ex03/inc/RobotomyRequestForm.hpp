#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

# include <iostream>
# include <fstream>

class RobotomyRequestForm : public AForm{
private:
	const std::string	target;

public:
//constructor
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);

//destructor
	~RobotomyRequestForm();

//copy constructor
	RobotomyRequestForm(const RobotomyRequestForm& other);

//operator overload
	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

//methods
	std::string	getTarget() const;
	void		executeForm() const;
};

#endif