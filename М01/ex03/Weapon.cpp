#include "Weapon.hpp"


Weapon::Weapon(std::string const &type)
{
	this->_type = type;
}

Weapon::~Weapon() {}

std::string const &Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string const &type)
{
	this -> _type = type;
}
