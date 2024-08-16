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
	try
	{
		if (dynamic_cast<A *>(p))
			std::cout << "pointer points to A" << std::endl;
		else if (dynamic_cast<B *>(p))
			std::cout << "pointer points to B" << std::endl;
		else if (dynamic_cast<C *>(p))
			std::cout << "pointer points to C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	identify(Base &p)
{
	try
	{
		if (dynamic_cast<A *>(&p))
			std::cout << "reference is of A" << std::endl;
		else if (dynamic_cast<B *>(&p))
			std::cout << "reference is of B" << std::endl;
		else if (dynamic_cast<C *>(&p))
			std::cout << "reference is of C" << std::endl;
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