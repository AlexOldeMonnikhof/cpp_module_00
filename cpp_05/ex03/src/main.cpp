#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat 	john("John", 3);
	Intern		rick;

	AForm		*form1 = rick.makeForm("ShrubberyCreation", "garden");
	AForm		*form2 = rick.makeForm("PresidentialPardon", "andy");
	AForm		*form3 = rick.makeForm("NonExistingForm", "john");

	if (form1)
	{
		john.signForm(*form1);
		john.executeForm(*form1);
	}

	if (form2)
	{
		john.signForm(*form2);
		john.executeForm(*form2);
	}

	//form3 not found (NULL)
	if (form3)
	{
		john.signForm(*form3);
		john.executeForm(*form3);
	}

	delete form1; delete form2; delete form3;
	return 0;
}
