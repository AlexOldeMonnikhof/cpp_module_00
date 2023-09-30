#include "../inc/PhoneBook.hpp"

#include <iostream>

void	PhoneBook::add_contact()
{
	Contact	*new_contact;

	cout << endl;
	new_contact = &this->contacts[this->current_index];
	new_contact->set_first_name();
	new_contact->set_last_name();
	new_contact->set_nickname();
	new_contact->set_phone_number();
	new_contact->set_secret();
	print_msg("Contact added succesfully!\n");
	this->change_index();
}

void	PhoneBook::display_phonebook()
{
	string	input;
	int		column_index;
	int		search_index;

	if (!this->contact_count)
	{
		print_msg("No contacts yet...");
		return ;
	}
	display_prompt();
	column_index = 0;
	while (column_index < this->contact_count)
		display_row(column_index++);
	cout << "Enter an existing index: ";
	getline(cin, input);
	if (cin.eof())
		return;
	if (is_valid_number(input))
		search_index = stoi(input);
	if (search_index < 0 || search_index >= this->contact_count)
		print_msg("invalid index. Stopping the search...\n");
	else
		display_contact(search_index);
}
