#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(const Dog &val)
{
	std::cout << "Dog operator= called" << std::endl;
	delete this->_brain;
	this->_brain = new Brain(*val._brain);
	return *this;
}

std::string Dog::makeSound() const
{
	return "GAV-GAV";
}

Brain &Dog::getBrain() const
{
	return *_brain;
}

void Dog::setBrain(const Brain &brain)
{
	delete this->_brain;
	this->_brain = new Brain(brain);
}



