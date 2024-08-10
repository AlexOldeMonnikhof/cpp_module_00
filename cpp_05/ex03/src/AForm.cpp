#include "../inc/AForm.hpp"


//could also initialize isSigned boolean in the member initializer list
//but want to show const variables need to be initialized on this list and nonconst not
AForm::AForm() : name("Basic project"), signGrade(42), executeGrade(21)
{
	isSigned = false;
	std::cout << "A basic project has been created." << std::endl;
}

AForm::AForm(std::string name) : name(name), signGrade(42), executeGrade(21)
{
	isSigned = false;
}

AForm::AForm(const std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw(GradeTooHighException());
	if (signGrade > 150 || executeGrade > 150)
		throw(GradeTooLowException());
	isSigned = false;
	std::cout << name << " has been created" << std::endl;
}

AForm::AForm(const AForm& other) : name(other.getName()), signGrade(other.getSignGrade()), executeGrade(other.getExecuteGrade())
{
	*this = other;
}

//if statement is useless but needed because the -Werror flag
AForm&	AForm::operator=(const AForm& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

AForm::~AForm()
{

}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("The grade of the form can not be higher than 1");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The grade of the form can not be lower than 150");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("This form is not signed");
}

const std::string	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getSigned() const
{
	return (this->isSigned);
}

int	AForm::getSignGrade() const
{
	return (this->signGrade);
}

int AForm::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	AForm::beSigned(Bureaucrat& signer)
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

std::ostream& operator<<(std::ostream& stream, const AForm& other)
{
	stream << "AForm: " << other.getName() << "\nSigned: ";
	if (other.getSigned() == true)
		stream << "true";
	else
		stream << "false";
	stream << "\nSign grade: " << other.getSignGrade() << "\nExecute grade: ";
	return (stream);
}
