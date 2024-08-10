#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat	person1("bob", 23);
		Bureaucrat	person2("john", 63);
	
		Form		form1("Big project 1", 50, 20);
		Form		form2("Big project 2", 30, 15);
	
		person1.signForm(form1);
		person1.signForm(form1);
	
		std::cout << form1 << std::endl;

		//grade too low
		person2.signForm(form2);

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}