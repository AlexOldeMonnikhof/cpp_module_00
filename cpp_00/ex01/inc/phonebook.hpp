#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# include <iostream>
# include <cstring>

using	std::cout;
using	std::endl;
using	std::cin;

class	PhoneBook{
public:
	PhoneBook();
	void	add_contact();
	void	display_phonebook();
	void	display_row(int column_index);
	void	display_contact(int i);
	void	change_index();
	int		get_index();

private:
	Contact	contacts[8];
	int		current_index;
	int		contact_count;
};

//UTILS
bool	is_valid_word(string str);
bool	is_valid_number(string str);
void	print_msg(string msg);
void	display_prompt();

#endif