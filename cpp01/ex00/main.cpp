#include <string>

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int
	main(void)
{
	Zombie	zombie1 {"Thomas"};
	Zombie	zombie2 {"Fabien"};
	Zombie	zombie3 {"Christian"};
	Zombie	*zombie4 = newZombie("Marion");
	Zombie	*zombie5 = newZombie("Isabelle");
	Zombie	*zombie6 = newZombie("Sylvie");

	delete zombie4;
	delete zombie5;
	delete zombie6;
	randomChump("Joceline");
	randomChump("Jean-Jaques");
	randomChump("Esmeralda");
}
