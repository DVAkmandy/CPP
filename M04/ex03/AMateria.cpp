#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &val)
{
	this ->_type = val._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}


std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
}
