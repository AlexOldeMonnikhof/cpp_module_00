#include "../inc/phonebook.hpp"

void	Contact::set_first_name(void)
{
	std::string	input;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, input);
	while (!is_valid_word(input) || input == "")
	{
		if (!is_valid_word(input))
			std::cout << "Name must contain letters only, try again." << std::endl;
		std::cout << "Enter your first name: ";
		std::getline(std::cin, input);
	}
	this->first_name = input;
}

void	Contact::set_last_name(void)
{
	std::string	input;

	std::cout << "Enter your last name: ";
	std::getline(std::cin, input);
	while (!is_valid_word(input) || input == "")
	{
		if (!is_valid_word(input))
			std::cout << "Name must contain letters only, try again." << std::endl;
		std::cout << "Enter your last name: ";
		std::getline(std::cin, input);
	}
	this->first_name = input;
}

void	Contact::set_nickname(void)
{
	std::string	input;

	std::cout << "Enter your nickname: ";
	std::getline(std::cin, input);
	while (!is_valid_word(input) || input == "")
	{
		if (!is_valid_word(input))
			std::cout << "Name must contain letters only, try again." << std::endl;
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, input);
	}
	this->first_name = input;
}

void	Contact::set_phone_number(void)
{
	std::string	input;

	std::cout << "Enter your phone number: ";
	std::getline(std::cin, input);
	while (!is_valid_number(input) || input == "")
	{
		if (!is_valid_number(input))
			std::cout << "Number must contain digits only, try again." << std::endl;
		std::cout << "Enter your phone number: ";
		std::getline(std::cin, input);
	}
	this->first_name = input;
}

void	Contact::set_secret(void)
{
	std::string	input;

	input == "";
	while (input == "")
	{
		std::cout << "Enter your darkest secret: ";
		getline(std::cin, input);
	}
	this->darkest_secret = input;
}
