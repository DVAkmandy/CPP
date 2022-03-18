#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
		: ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);

	std::cout << "FragTrap created: " << getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< getName() << " destroyed" << std::endl;
}


void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap " << getName() << " attacks " << target <<
			  ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap High-five." << std::endl;
}