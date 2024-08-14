#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("PresidentialPardonForm", 25, 5)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	(void)other;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::executeForm() const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox..." << std::endl;
}
