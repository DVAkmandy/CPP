#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(const Character &copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._materia[i])
			this->_materia[i] = copy._materia[i];
		else
			_materia[i] = 0;
	}
}

Character &Character::operator=(Character const  &val)
{
	this->_name = val._name;
	if (this == &val)
		return (*this);

	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
		_materia[i] = 0;
		if (val._materia[i])
			this->_materia[i] = val._materia[i];
		else
			_materia[i] = 0;
	}
	return (*this);

}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(_materia[i])
			delete _materia[i];
	}
}

void Character::equip(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = mat;
			std::cout << "Put " << i << " " << mat->getType() << " in inventory" << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Wrong index materia" << std::endl;
		return ;
	}
	std::cout << "Unequip " << idx << " materia: " << _materia[idx]->getType() << std::endl;
	_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (!_materia[idx])
	{
		std::cout  << "Materia not exist!" << std::endl;
		return ;
	}
	if (idx > 3 || idx < 0)
	{
		std::cout << "Wrong index materia" << std::endl;
		return ;
	}
	_materia[idx]->use(target);
}

std::string const &Character::getName() const
{
	return (this->_name);
}
