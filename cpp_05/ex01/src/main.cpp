#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
	try
	{
		Bureaucrat	person1("bob", 13);
		Form		form1("Big project", 50, 20);
		person1.signForm(form1);
		person1.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}