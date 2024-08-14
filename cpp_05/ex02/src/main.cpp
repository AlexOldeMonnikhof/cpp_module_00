#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		try
		{
			Bureaucrat	bureaucrat("john", 111);
			//ShrubberyCreationForm: sign = 145, exec = 137
			ShrubberyCreationForm form("house");

			bureaucrat.signForm(form);
			bureaucrat.executeForm(form);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	bureaucrat("bob", 40);
			//RobotomyRequestForm: sign = 72, exec = 45
			RobotomyRequestForm form("robot");

			bureaucrat.signForm(form);
			bureaucrat.executeForm(form);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	bureaucrat("robert", 3);
			//PresidentialPardonForm: sign = 25, exec = 5
			PresidentialPardonForm form("criminal");

			bureaucrat.signForm(form);
			bureaucrat.executeForm(form);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
