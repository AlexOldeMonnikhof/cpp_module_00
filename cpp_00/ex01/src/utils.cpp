#include "../inc/phonebook.hpp"

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
