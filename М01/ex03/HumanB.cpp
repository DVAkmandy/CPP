#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : m_name(name) {}

HumanB::~HumanB(){};

void HumanB::attack(void)
{
	if(_weapon)
	{
		std::cout << this ->m_name << " attacks with their "
				  << _weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this ->m_name << " attacks with their head "
				  << std::endl;
	}
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	_weapon = &newWeapon;
}
