#include <iostream>

using	std::cout;
using	std::endl;

int	main(int argc, char **argv)
{
	int	i, j;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			cout << (char)toupper(argv[i][j++]);
		i++;
	}
	cout << endl;
	return (0);
}
