#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string  &name)
		: ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	_name = name;

	ClapTrap::setName(name + "_clap_name");
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());

	std::cout << "DiamondTrap " << _name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	std::cout << "DiamondTrap" << std::endl;
	ScavTrap::attack(target);
	std::cout << "DiamondTrap" << std::endl;

}

void DiamondTrap::whoAmI(void) {
	std::cout << "ClapTrap: " << ClapTrap::getName() << " DiamondTrap: " << _name << std::endl;
}