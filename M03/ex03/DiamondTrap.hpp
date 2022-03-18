
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;

public:
	explicit DiamondTrap(const std::string  &name);
	~DiamondTrap();

	void attack(std::string const &target);
	void whoAmI(void);
};

#endif
