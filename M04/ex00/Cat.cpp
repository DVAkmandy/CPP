#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this ->_type = copy._type;
}

Cat &Cat::operator=(const Cat &val)
{
	std::cout << "Cat operator= called" << std::endl;
	this->_type = val._type;
	return *this;
}

std::string Cat::makeSound() const
{
	return "Moor-Moor";
}