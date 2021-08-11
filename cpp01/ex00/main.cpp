#include <string>

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int
	main(void)
{
	Zombie	*zombie1 = newZombie("Marion");
	Zombie	*zombie2 = newZombie("Isabelle");
	Zombie	*zombie3 = newZombie("Sylvie");

	randomChump("Joceline");
	randomChump("Jean-Jaques");
	randomChump("Esmeralda");
	delete zombie1;
	delete zombie2;
	delete zombie3;
}
