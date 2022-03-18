#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Animal constructor with type called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &val)
{
	std::cout << "Animal operator= called" << std::endl;
	this ->_type = val._type;
	return *this;
}

//std::string Animal::makeSound() const
//{
//	return ";-)";
//}

void Animal::setType(std::string type)
{
	this->_type = type;
}

std::string Animal::getType() const
{
	return (this->_type);
}
