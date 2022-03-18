#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string m_name;
	Weapon      *_weapon;

public:
	HumanB(std::string const &);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &newWeapon);

};


#endif
