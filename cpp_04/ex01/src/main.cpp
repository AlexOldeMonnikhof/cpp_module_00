#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

// void	leakss()
// {
// 	system("leaks -s animal");
// }

int	main()
{
	// atexit(leakss);
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Dog *dog1 = new Dog();
	const Dog *dog2 = new Dog(*dog1);
	const Cat *cat1 = new Cat();
	const Cat *cat2 = new Cat(*cat1);

	std::cout << dog2->getType() << " " << std::endl;
	std::cout << cat2->getType() << " " << std::endl;
	dog2->makeSound();

	const Animal *animalarray[4];
	animalarray[0] = dog1;
	animalarray[1] = cat1;
	animalarray[2] = dog2;
	animalarray[3] = cat2;

	animalarray[0]->makeSound();

	for (size_t i = 0; i < 4; i++)
		delete animalarray[i];

	delete j;
	delete i;
	return 0;
}
