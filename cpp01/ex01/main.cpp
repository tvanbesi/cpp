#include <string>

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int
	main(void)
{
	Zombie*	horde;
	int		n;

	n = 10;
	horde = zombieHorde(n, "Jean-Luc");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde; 
}
