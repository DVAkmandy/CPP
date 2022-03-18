#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	ScavTrap robot("ID_1");

	srand(time(NULL));
	while (robot.getHitPoints() > 0 && robot.getEnergyPoints() > 0) {
		if (robot.getHitPoints() <= 80)
		{
			std::cout << std::endl;
			robot.guardGate();
		}
		std::cout << std::endl;
		robot.takeDamage(rand() % 100 + 1);
		robot.beRepaired(rand() % 20 + 1);
		robot.attack("ID_2");
	}
	std::cout << std::endl;
	return 0;
}
