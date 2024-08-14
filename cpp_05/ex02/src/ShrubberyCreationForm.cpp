#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 185, 137), target(target)
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

void	ShrubberyCreationForm::executeForm() const
{
	std::ofstream	outputFile;
	outputFile.open((this->getTarget()) + "_shrubbery");
	outputFile << TREE << std::endl;
	outputFile.close();
}
