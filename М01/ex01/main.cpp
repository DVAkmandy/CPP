#include "Zombie.hpp"

int main()
{
	Zombie	*Horde;
	int N = 10;

	Horde = zombieHorde(N, "Dinamic");
	for (int i = 0; i < N; i++)
		Horde[i].announce();

	delete [] Horde;
	return 0;
}
