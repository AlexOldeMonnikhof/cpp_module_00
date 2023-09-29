#include "../inc/phonebook.hpp"

int	main()
{
	string	input;

	while (1)
	{
		getline(cin, input);
		if (cin.eof())
		{
			cout << "EOF reached. (Quitting program)" << endl;
			return (1);
		}
		if (input == "ADD")
			new_contact();
		else if (input == "SEARCH")
			display_contact();
		else if (input == "EXIT")
			exit(0);
	}
	return (0);
}
