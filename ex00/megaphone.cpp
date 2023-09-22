#include <iostream>

int	main(int argc, char **argv)
{
	char	c;
	int		i, j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			c = toupper(argv[i][j++]);
			std::cout << c;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
