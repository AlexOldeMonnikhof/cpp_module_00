#include "../inc/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat();
		Bureaucrat b("bob");
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}