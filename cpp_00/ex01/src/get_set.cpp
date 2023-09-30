#include "../inc/phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
}

void	Contact::set_first_name(void)
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your first name: ";
		getline(cin, input);
		if (cin.eof())
			break ;
		if (!is_valid_word(input))
			cout << "Name must contain letters only, try again." << endl;
	} while (!is_valid_word(input) || input.empty());
	this->first_name = input;
}

void	Contact::set_last_name(void)
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your last name: ";
		getline(cin, input);
		if (cin.eof())
			break ;
		if (!is_valid_word(input))
			cout << "Name must contain letters only, try again." << endl;
	} while (!is_valid_word(input) || input.empty());
	this->last_name = input;
}

void	Contact::set_nickname(void)
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your nickname: ";
		getline(cin, input);
		if (cin.eof())
			break ;
		if (!is_valid_word(input))
			cout << "Name must contain letters only, try again." << endl;
	} while (!is_valid_word(input) || input.empty());
	this->nickname = input;
}

void	Contact::set_phone_number(void)
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your phone number: ";
		getline(cin, input);
		if (cin.eof())
			break ;
		if (!is_valid_number(input))
			cout << "Number must contain digits only, try again." << endl;
	} while (!is_valid_number(input) || input.empty());
	this->phone_number = input;
}

void	Contact::set_secret(void)
{
	string	input;

	if (cin.eof())
		return ;
	do
	{
		cout << "Enter your darkest secret: ";
		getline(cin, input);
	} while (input.empty() && !cin.eof());
	this->secret = input;
}


string	Contact::get_first_name(void)
{
	return (first_name);
}

string	Contact::get_last_name(void)
{
	return (last_name);
}

string	Contact::get_nickname(void)
{
	return (nickname);
}

string	Contact::get_phone_number(void)
{
	return (phone_number);
}

string	Contact::get_secret(void)
{
	return (secret);
}
