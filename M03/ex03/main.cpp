#include "DiamondTrap.hpp"

int main() {
	DiamondTrap robot("ID_1");

	std::cout << std::endl;
	robot.whoAmI();

	std::cout << std::endl;

	robot.attack("ID_2");
	std::cout << std::endl;

	return 0;
}
