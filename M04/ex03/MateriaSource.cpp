#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete this->_source[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	(*this) = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &val)
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = val._source[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_source[i])
		{
			_source[i] = materia;
			std::cout << "Learn " << materia->getType() << std::endl;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] && _source[i]->getType() == type)
		{
			std::cout << "Find our materia " << _source[i]->getType() << std::endl;
			return (_source[i]->clone());//тут выделяется еще помять и возвращаем новый клон который будет
			// использоваться в инвентаре Персонажа, а инвентарь персонажа мы чистим когда выходим, поэтому не будет
			// сеги когда удалим (в деструкторе) и инвентарь персонажа и ящик материи. Получается что ящик Материи
			// имеет свой набор из выделенных материй и инвентарь персонажа имеет собственные клоны с памятью.
		}
	}
	return (0);
}
