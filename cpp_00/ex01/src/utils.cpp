#include "../inc/phonebook.hpp"

bool	is_valid_word(string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(isalpha(str[i])) && str[i] != ' ')
			return (false);
		i++;
	}
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
