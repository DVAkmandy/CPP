#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *ptr_zombie = new Zombie(name);
	if (!ptr_zombie)
	{
		std::cout << "new ptr_zombie failed\n";
		return 0;
	}
	return (ptr_zombie);
}