#include "ClapTrap.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	ClapTrap robot("ID_1");

	srand(time(NULL));
	while (robot.getHitPoints() > 0 && robot.getEnergyPoints() > 0) {
		std::cout << std::endl;
		robot.takeDamage(rand() % 10 + 1);
		robot.beRepaired(rand() % 3 + 1);
		robot.attack("ID_2");
	}
	std::cout << std::endl;
	return 0;
}
