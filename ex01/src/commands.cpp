#include "../inc/phonebook.hpp"
#include <iostream>

void	new_contact()
{
	Contact	new_contact;
	std::string	secret;

	std::cout << "Enter your first name: " << std::endl;
	std::cin >> new_contact.first_name;
	std::cout << "Enter your last name: " << std::endl;
	std::cin >> new_contact.last_name;
	std::cout << "Enter your nickname: " << std::endl;
	std::cin >> new_contact.nickname;
	std::cout << "Enter your phone number: " << std::endl;
	std::cin >> new_contact.phone_number;
	std::cout << "Enter your darkest secret: " << std::endl;
	std::cin >> secret;
	new_contact.set_secret(secret);
}

void	display_contact()
{
	std::cout << "display" <<std::endl;
}

void	exit_program()
{
	std::cout << "exit" <<std::endl;
}
