#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
int main()
{
	try
	{
		Bureaucrat	person1("bob", 53);
		Form		form1("Big project", 50, 20);
		person1.signForm(form1);
		person1.signForm(form1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}