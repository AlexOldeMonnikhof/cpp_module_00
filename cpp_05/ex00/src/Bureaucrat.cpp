#include "../inc/Bureaucrat.hpp"

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high.");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low.");
}
