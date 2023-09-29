#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstring>

using	std::cout;
using	std::endl;
using	std::cin;
using	std::string;


class	Contact{
public:
	void	set_first_name(void);
	void	set_last_name(void);
	void	set_nickname(void);
	void	set_phone_number(void);
	void	set_secret(void);
	string	get_first_name(void);
	string	get_last_name(void);
	string	get_nickname(void);
	string	get_phone_number(void);
	string	get_secret(void);

private:
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	secret;
};

class	Phonebook{
	Contact	contacts[8];
};

void	new_contact();
void	display_contact();
void	exit_program();

//UTILS
bool	is_valid_word(string str);
bool	is_valid_number(string str);

#endif