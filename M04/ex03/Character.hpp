
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	AMateria	*_materia[4];
	std::string _name;

public:
	Character(std::string name);
	Character(const Character &copy);
	Character &operator=(Character const & val);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* mat);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif
