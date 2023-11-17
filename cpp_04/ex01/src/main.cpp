#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

int	main()
{
	const Animal *animalarray[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animalarray[i] = new Cat();
		else
			animalarray[i] = new Dog();
	}

	animalarray[4]->makeSound();

	for (size_t i = 0; i < 10; i++)
		delete animalarray[i];
	return 0;
}
