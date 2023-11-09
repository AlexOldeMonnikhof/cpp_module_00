#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	return 0;
}
