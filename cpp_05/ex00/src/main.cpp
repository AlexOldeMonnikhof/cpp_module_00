#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat john("john");
		Bureaucrat bob("bob", 59);
		Bureaucrat larry("larry", 1);

		//decrementing grade
		for (size_t i = 0; i < 100; i++)
			larry.decrementGrade();
		std::cout << larry << std::endl;

		//error: grade too low
		Bureaucrat peter("peter", 151);

		//error: grade too high
		Bureaucrat mitchell("mitchell", 1);
		mitchell.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}