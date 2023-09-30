#include "../inc/phonebook.hpp"

#include <iostream>

void	new_contact(Phonebook *pb)
{
	// Contact	new_contact;

	// new_contact = pb->contacts[pb->index];
	// new_contact.set_first_name();
	pb->contacts[pb->index].set_first_name();
	pb->contacts[pb->index].set_last_name();
	pb->contacts[pb->index].set_nickname();
	pb->contacts[pb->index].set_phone_number();
	pb->contacts[pb->index].set_secret();
	pb->index++;
	if (pb->index == 8)
	{
		pb->index = 0;
		cout << "Warning: maximum (8) amount of contacts reached!" << endl;
		cout << "The oldest contact will be overwritten the next time!" << endl;
	}
}

void	display_contact(Phonebook *pb)
{
	cout << pb->contacts[0].get_first_name() << endl;
}

void	exit_program()
{
	cout << "exit" << endl;
}
