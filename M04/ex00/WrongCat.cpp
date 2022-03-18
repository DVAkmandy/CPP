#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this ->_type = copy._type;
}

WrongCat &WrongCat::operator=(const WrongCat &val)
{
	std::cout << "WrongCat operator= called" << std::endl;
	this->_type = val._type;
	return *this;
}

std::string WrongCat::makeSound() const
{
	return "Moor-Moor";
}
