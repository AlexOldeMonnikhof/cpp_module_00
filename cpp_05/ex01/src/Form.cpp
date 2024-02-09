#include "../inc/Form.hpp"

//could also initialize isSigned boolean in the member initializer list
//but want to show const variables need to be initialized on this list and nonconst not
Form::Form() : name("Basic project"), signGrade(42), executeGrade(21)
{
	isSigned = false;
	std::cout << "A basic project has been created." << std::endl;
}

Form::Form(std::string name) : name(name), signGrade(42), executeGrade(21)
{
	isSigned = false;
}

Form::Form(const std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw(GradeTooHighException());
	if (signGrade > 150 || executeGrade > 150)
		throw(GradeTooLowException());
	isSigned = false;
	std::cout << name << " has been created" << std::endl;
}

Form::~Form()
{

}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The grade of the form can not be higher than 1");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade of the form can not be lower than 150");
}

const std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSigned() const
{
	return (this->isSigned);
}

int	Form::getSignGrade() const
{
	return (this->signGrade);
}

int Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	Form::beSigned(Bureaucrat& signer)
{
	if (signer.getGrade() > this->getSignGrade() || this->getSigned() == true)
		std::cout << signer.getName() << " couldn't sign " << name << " because ";
	if (signer.getGrade() > this->getSignGrade())
		throw(Bureaucrat::GradeTooLowException());
	if (this->getSigned() == true)
		std::cout << this->name << " is already signed." << std::endl;
	else
	{
		this->isSigned = true;
		std::cout << signer.getName() << " signed " << this->getName() << "." << std::endl;
	}
}
