#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

using	std::string;

class	Contact{
public:
	Contact(){};
	void	set_first_name();
	void	set_last_name();
	void	set_nickname();
	void	set_phone_number();
	void	set_secret();
	string	get_first_name();
	string	get_last_name();
	string	get_nickname();
	string	get_phone_number();
	string	get_secret();

private:
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	secret;
};

#endif