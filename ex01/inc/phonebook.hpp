#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact;

class PhoneBook{
	Contact contacts[8];
};

class Contact{

public:
	

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

#endif