#include "iter.hpp"

int	main()
{
	std::string weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", };
    int         numbers[] = {42, 1337, 92829, -25922};

    std::cout << "Weekdays:\n";
    ::iter(weekdays, 7, ::print);

    std::cout << "\nNumbers:\n";
    ::iter(numbers, 4, ::print);

    return 0;
}
