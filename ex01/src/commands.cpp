#include "../inc/phonebook.hpp"

#include <iostream>

void	new_contact()
{
	Contact	new_contact;

	new_contact.set_first_name();
	new_contact.set_last_name();
	new_contact.set_nickname();
	new_contact.set_phone_number();
	new_contact.set_secret();
}

void	display_contact()
{
	std::cout << "display" <<std::endl;
}

void	exit_program()
{
	std::cout << "exit" <<std::endl;
}
