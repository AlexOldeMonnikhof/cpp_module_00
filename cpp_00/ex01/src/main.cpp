#include "../inc/phonebook.hpp"

int	main()
{
	Phonebook	pb;
	string		input;

	while (1)
	{
		getline(cin, input);
		if (cin.eof())
		{
			cout << "EOF reached. (Quitting program)" << endl;
			return (1);
		}
		if (input == "ADD")
			new_contact(&pb);
		else if (input == "SEARCH")
			display_contact(&pb);
		else if (input == "EXIT")
			exit(0);
	}
	return (0);
}
