#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{
public:
//constructor
	Intern();

//destructor
	~Intern();

//copy constructor
	Intern(const Intern& other);

//operator overload
	Intern& operator=(const Intern& other);

//methods
    AForm *makeForm(std::string form, std::string target);
};

#endif