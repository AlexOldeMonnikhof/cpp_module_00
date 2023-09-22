#include "awesome.hpp"
#include <iostream>

int	main()
{
	std::string input;
	while (1)
	{
		std::cin >> input;
		if (input == "ADD")
			new_contact();
		else if (input == "SEARCH")
			display_contact();
		else if (input == "EXIT")
			exit_program();
	}
	return (0);
}