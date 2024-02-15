#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(42)
{
	std::cout << "Default has joined with grade: 42" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(42)
{
	std::cout << "" << name << " has joined with grade: 42" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	setGrade(grade);
	std::cout << "" << name << " has joined with grade: " << grade << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : name("Default")
{
	setGrade(grade);
	std::cout << "An bureacrat named \"Default\" has joined with grade: " << grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	
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
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw(GradeTooHighException());
	if (grade > 150)
		throw(GradeTooLowException());
	this->grade = grade;
}

void	Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw (GradeTooHighException());
	grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw (GradeTooLowException());
	grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high. (or invalid)");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low. (or invalid)");
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other)
{
	stream << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
	return (stream);
}
