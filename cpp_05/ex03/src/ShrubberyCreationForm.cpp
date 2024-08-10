#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	(void)other;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getSigned() == false)
		throw(AForm::FormNotSigned());
	if (executor.getGrade() > this->getSignGrade())
		throw(AForm::GradeTooLowException());
	std::ofstream	outputFile;
	outputFile.open((this->getName()) + "_shrubbery");
	outputFile << "lol" << std::endl;
	outputFile.close();
}
