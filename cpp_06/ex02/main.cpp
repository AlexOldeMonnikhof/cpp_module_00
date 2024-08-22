#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base* generate()
{
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
		return (dynamic_cast<Base *>(new A));
	if (i == 1)
		return (dynamic_cast<Base *>(new B));
	return (dynamic_cast<Base *>(new C));
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "points to A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "points to B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "points to C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		if (dynamic_cast<A *>(&p))
			std::cout << "references to A" << std::endl;
		else if (dynamic_cast<B *>(&p))
			std::cout << "references to B" << std::endl;
		else if (dynamic_cast<C *>(&p))
			std::cout << "references to C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	Base	*base = generate();

	identify(base);
	identify(*base);

	//does not work because dynamic_cast returns nullptr if the cast is not possible
	identify(NULL);

	delete base;
}
