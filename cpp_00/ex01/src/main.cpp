#include "../inc/PhoneBook.hpp"

int	main()
{
	PhoneBook	pb;
	string		input;

	print_msg("Welcome to My Awesome PhoneBook!");
	print_msg("\'ADD\' and \'SEARCH\' contacts, or \'EXIT\'.\n");
	while (1)
	{
		getline(cin, input);
		if (cin.eof())
		{
			cout << "EOF reached. (Quitting program)" << endl;
			return (1);
		}
		if (input == "ADD")
			pb.add_contact();
		else if (input == "SEARCH")
			pb.display_phonebook();
		else if (input == "EXIT")
			break ;
		else
			print_msg("Command not found...\nExisting commands: \'ADD\', \'SEARCH\' or \'EXIT\'.\n");
	}
	print_msg("Exiting...");
	return (0);
}
