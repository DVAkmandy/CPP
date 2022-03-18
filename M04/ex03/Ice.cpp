#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy._type) {
	(*this) = copy;
}

Ice & Ice::operator= (const Ice &val) {
	if (this != &val)
		this->_type = val._type;
	return (*this);
}

AMateria* Ice::clone() const {
	AMateria *clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
