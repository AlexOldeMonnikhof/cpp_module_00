#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("RobotomyRequestForm", 72, 45)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	(void)other;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::executeForm() const
{
	std::cout << "DRRRRRRR" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << getTarget() << " has been robotomized..." << std::endl;
	else
		std::cout << "robotomy on " << getTarget() << " has failed..." << std::endl;
}
