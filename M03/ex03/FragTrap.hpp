#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(std::string const &name);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys(void);

};


#endif
