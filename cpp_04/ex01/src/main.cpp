#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Dog *dog1 = new Dog();
	const Dog *dog2 = new Dog(*dog1);
	const Cat *cat1 = new Cat();
	const Cat *cat2 = new Cat(*cat1);

	std::cout << dog2->getType() << " " << std::endl;
	std::cout << cat2->getType() << " " << std::endl;
	dog2->makeSound();
	cat2->makeSound();

	const Animal *animalarray[4];
	animalarray[0] = dog1;
	animalarray[1] = cat1;
	animalarray[2] = dog2;
	animalarray[3] = cat2;

	animalarray[3]->makeSound();

	delete j;
	delete i;
	delete dog1;
	delete dog2;
	delete cat1;
	delete cat2;
	return 0;
}
