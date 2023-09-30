#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	current_index = 0;
	contact_count = 0;
}

int	PhoneBook::get_index()
{
	return (this->current_index);
}

void	PhoneBook::change_index()
{
	this->current_index++;
	if (this->contact_count < 8)
		this->contact_count++;
	if (this->current_index == 8)
	{
		print_msg("Warning: maximum (8) amount of contacts reached!");
		print_msg("The oldest contact will be overwritten the next time!");
		this->current_index = 0;
	}
}

void	Contact::set_first_name()
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your first name: ";
		getline(cin, input);
		if (cin.eof())
			return ;
		if (!is_valid_word(input))
			print_msg("Name must contain letters only, try again.");
	} while (!is_valid_word(input) || input.empty());
	this->first_name = input;
}

void	Contact::set_last_name()
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your last name: ";
		getline(cin, input);
		if (cin.eof())
			return ;
		if (!is_valid_word(input))
			print_msg("Name must contain letters only, try again.");
	} while (!is_valid_word(input) || input.empty());
	this->last_name = input;
}

void	Contact::set_nickname()
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your nickname: ";
		getline(cin, input);
		if (cin.eof())
			return ;
		if (!is_valid_word(input))
			print_msg("Name must contain letters only, try again.");
	} while (!is_valid_word(input) || input.empty());
	this->nickname = input;
}

void	Contact::set_phone_number()
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your phone number: ";
		getline(cin, input);
		if (cin.eof())
			return ;
		if (!is_valid_number(input))
			print_msg("Number must contain digits only, try again.");
	} while (!is_valid_number(input) || input.empty());
	this->phone_number = input;
}

void	Contact::set_secret()
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your darkest secret: ";
		getline(cin, input);
		if (cin.eof())
			return ;
	} while (input.empty());
	this->secret = input;
}

string	Contact::get_first_name()
{
	return (first_name);
}

string	Contact::get_last_name()
{
	return (last_name);
}

string	Contact::get_nickname()
{
	return (nickname);
}

string	Contact::get_phone_number()
{
	return (phone_number);
}

string	Contact::get_secret()
{
	return (secret);
}
