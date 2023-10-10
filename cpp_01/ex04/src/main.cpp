#include "../inc/Replace.hpp"

static int	error_msg(string msg)
{
	cout << msg << endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (error_msg("Wrong amount of arguments..."));
	if (!argv[1][0] || !argv[2][0] || !argv[3][0])
		return (error_msg("Arguments can not be empty..."));
	Replace	r((const char*)argv[1], argv[2], argv[3]);
	return (0);
}
