#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("John"), grade(42)
{
	std::cout << "An bureacrat named \"John\" has spawned with grade: 42" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(42)
{
	std::cout << "An bureacrat named \"" << name << "\" has spawned with grade: 42" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "An bureacrat named \"" << name << "\" has spawned with grade: " << grade << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : grade(grade)
{
	std::cout << "An bureacrat named \"John\" has spawned with grade: " << grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << name << " has left" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	grade = other.grade;
}


const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high.");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low.");
}
