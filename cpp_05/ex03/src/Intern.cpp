#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

static AForm *makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm *makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	std::string	formType[] = 
	{"PresidentialPardon", 
	"RobotomyRequest", 
	"ShrubberyCreation"};

	AForm *(*forms[])(std::string target) = 
	{&makePresidentialPardonForm, 
	&makeRobotomyRequestForm, 
	&makeShrubberyCreationForm};

	for	(int i = 0; i < 3; i++)
	{
		if (form == formType[i])
		{
			std::cout << "Intern creates " << formType[i] << std::endl;
			return (forms[i](target));
		}
	}
	std::cout << "Intern could not find form \"" << form << "\"..." << std::endl;
	return (NULL);
}
