#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	_brain = new Brain;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(const Cat &val)
{
	std::cout << "Cat operator= called" << std::endl;
	delete this->_brain;
	this->_brain = new Brain(*val._brain);
	return *this;
}

std::string Cat::makeSound() const
{
	return "Moor-Moor";
}

Brain &Cat::getBrain() const
{
	return *_brain;
}
