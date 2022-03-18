#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
		: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Created: " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " destroyed" << std::endl;
}


void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<
			  ", causing " << _attackDamage << " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	this->_attackDamage = amount;
	--_energyPoints;
	std::cout << "ClapTrap " << _name
			  << " take " << "-" << amount
			  << " damage! Energy Points = "
			  << _energyPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		this->_hitPoints +=amount;
		--_energyPoints;
		std::cout << "ClapTrap " << _name
				  << " repaired " << "+" << amount
				  << " hitpoints! Energy Points = "
				  << _energyPoints << std::endl;
	} else
		std::cout << "Oops! ClapTrap is killed :(" << std::endl;
}

int ClapTrap::getHitPoints() {
	return _hitPoints;
}

int ClapTrap::getEnergyPoints() {
	return _energyPoints;
}