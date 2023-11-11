#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
//constructor
	Cat();
//destructor
	~Cat();
//copy constructor
	Cat(const Cat &other);
//operator overload
	Cat& operator=(const Cat &other);
//methods
	void	makeSound() const;
};

#endif