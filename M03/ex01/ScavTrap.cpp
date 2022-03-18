#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name)
		: ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);

	std::cout << "ScavTrap created: " << getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< getName() << " destroyed" << std::endl;
}


void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target <<
			  ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have entered in Gate keeper mode." << std::endl;
}
