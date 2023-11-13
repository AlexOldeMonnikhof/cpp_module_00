#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructing a brain..." << std::endl;
	std::string	idea1 = "Some idea...", idea2 = "Some other idea...";
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			ideas[i] = idea1;
		else
			ideas[i] = idea2;
	}
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = other.getIdea(i);
	}
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	return (ideas[i]);
}
