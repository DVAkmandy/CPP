#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie *Horde = new Zombie[N];
	if (!Horde)
	{
		std::cout << "new ptr_zombie failed\n";
		return 0;
	}

	for (int i = 0; i < N; i++)
	{
		Horde[i].setName(&name);
	}
	return (Horde);
}
