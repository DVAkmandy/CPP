#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
private:
	std::string _name;
	int     _hitPoints;
	int     _energyPoints;
	int     _attackDamage;

public:
	ClapTrap(std::string const &name);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName();
	int getHitPoints();
	int getEnergyPoints();
	int getAttackDamage();

	void setName(std::string const &name);
	void setHitPoints (int newHit);
	void setEnergyPoints (int newEnergy);
	void setAttackDamage (int newAttack);

};


#endif
