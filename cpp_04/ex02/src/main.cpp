#include "../inc/AAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

int	main()
{
	// AAnimal	*a = new AAnimal(); // displays error
	AAnimal *dog1 = new Dog(); // is allowed
	dog1->makeSound();

	AAnimal *cat1 = new Cat();
	std::cout << cat1->getType() << std::endl;

	delete dog1; delete cat1;
	return 0;
}
