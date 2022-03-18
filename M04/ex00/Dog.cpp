#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this ->_type = copy._type;
}

Dog &Dog::operator=(const Dog &val)
{
	std::cout << "Dog operator= called" << std::endl;
	this->_type = val._type;
	return *this;
}

std::string Dog::makeSound() const
{
	return "GAV-GAV";
}



