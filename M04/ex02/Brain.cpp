#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < IDEAS; i++)
		_ideas[i] = "ideas_" + std::to_string(i);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain &val)
{
	std::cout << "Cat operator= called" << std::endl;
	if(this == &val)
		return (*this);
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = val._ideas[i];
	return (*this);
}

std::string Brain::getIdea(int i) const
{
	return _ideas[i];
}
