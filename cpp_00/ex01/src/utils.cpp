#include "../inc/PhoneBook.hpp"

bool	is_valid_word(string str)
{
	int	i, alpha_count;

	i = 0;
	alpha_count = 0;
	while (str[i])
	{
		if (!(isalpha(str[i])) && str[i] != ' ')
			return (false);
		if (isalpha(str[i]))
			alpha_count++;
		i++;
	}
	if (!alpha_count)
		return (false);
	return (true);
}

bool	is_valid_number(string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(isdigit(str[i++])))
			return (false);
	}
	return (true);
}

void	print_msg(string msg)
{
	if (!cin.eof())
		cout << msg << endl;
}

void	display_prompt()
{
	cout << endl;
	for (size_t i = 0; i < 45; i++)
		cout << "-";
	cout << endl;
	cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << endl;
	for (size_t i = 0; i < 45; i++)
		cout << "-";
	cout << endl;
}

void	PhoneBook::display_contact(int i)
{
	cout << endl;
	cout << "First name: ";
	print_msg(contacts[i].get_first_name());
	cout << "Last name: ";
	print_msg(contacts[i].get_last_name());
	cout << "Nickname: ";
	print_msg(contacts[i].get_nickname());
	cout << "Phone number: ";
	print_msg(contacts[i].get_phone_number());
	cout << endl;
}

void	PhoneBook::display_row(int column_index)
{
	int	len = 0, white_spaces = 0;
	Contact	*current_contact;

	cout << "|";
	for (size_t i = 0; i < 9; i++)
		cout << " ";
	cout << column_index;
	cout << "|";
	current_contact = &this->contacts[column_index];
	len = current_contact->get_first_name().size();
	if (len > 10)
		len = 10;
	white_spaces = 10 - len;
	for (size_t i = 0; i < white_spaces; i++)
		cout << " ";
	for (size_t i = 0; i < len; i++)
	{
		if (i != 9 || current_contact->get_first_name().size() <= 10)
			cout << current_contact->get_first_name()[i];
		else
			cout << ".";
	}
	cout << "|";
	len = current_contact->get_last_name().size();
	if (len > 10)
		len = 10;
	white_spaces = 10 - len;
	for (size_t i = 0; i < white_spaces; i++)
		cout << " ";
	for (size_t i = 0; i < len; i++)
	{
		if (i != 9 || current_contact->get_last_name().size() <= 10)
			cout << current_contact->get_last_name()[i];
		else
			cout << ".";
	}
	cout << "|";
	len = current_contact->get_nickname().size();
	if (len > 10)
		len = 10;
	white_spaces = 10 - len;
	for (size_t i = 0; i < white_spaces; i++)
		cout << " ";
	for (size_t i = 0; i < len; i++)
	{
		if (i != 9 || current_contact->get_nickname().size() <= 10)
			cout << current_contact->get_nickname()[i];
		else
			cout << ".";
	}
	cout << "|" << endl;
	for (size_t i = 0; i < 45; i++)
		cout << "-";
	cout << endl;
}
