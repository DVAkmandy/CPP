#include "Zombie.hpp"

int main()
{
	Zombie	*zombieDinam;

	zombieDinam = newZombie("Dinam");
	randomChump("Stat");

	zombieDinam->announce();
	delete(zombieDinam);
	return 0;
}