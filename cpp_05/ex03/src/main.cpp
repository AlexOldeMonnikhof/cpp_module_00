#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/AForm.hpp"

int main()
{
	try
	{
		Bureaucrat	b1("john", 149);
		ShrubberyCreationForm f1("house");
		f1.execute(b1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}