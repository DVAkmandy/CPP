#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap(std::string const &name);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

#endif