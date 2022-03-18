#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "WrongAnimal constructor with type called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this -> _type = copy._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &val)
{
	std::cout << "WrongAnimal operator= called" << std::endl;
	this ->_type = val._type;
	return *this;
}

std::string WrongAnimal::makeSound() const
{
	return ";-(";
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
