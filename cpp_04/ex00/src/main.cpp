#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* d1 = new Dog();
	const Animal* c1 = new Cat();
	const WrongAnimal* wa1 = new WrongCat();
	std::cout << d1->getType() << " " << std::endl;
	std::cout << c1->getType() << " " << std::endl;
	c1->makeSound(); //will output the cat sound!
	d1->makeSound();
	meta->makeSound();
	wa1->makeSound(); // will not output cat sound
	delete meta;
	delete d1;
	delete c1;
	delete wa1;
	return (0);
}
