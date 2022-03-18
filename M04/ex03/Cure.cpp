#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy._type)
{
	(*this) = copy;
}

Cure & Cure::operator= (const Cure &val) {
	if (this != &val)
		this->_type = val._type;
	return (*this);
}

AMateria* Cure::clone() const {
	AMateria *clone = new Cure();
	return (clone);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}