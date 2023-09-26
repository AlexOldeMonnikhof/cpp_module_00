#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstring>

class Contact{

public:
	Contact(){};
	~Contact(){};
	void	set_first_name(void);
	void	set_last_name(void);
	void	set_nickname(void);
	void	set_phone_number(void);
	void	set_secret(void);

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

void	new_contact();
void	display_contact();
void	exit_program();

//UTILS
bool	is_valid_word(std::string str);
bool	is_valid_number(std::string str);

#endif