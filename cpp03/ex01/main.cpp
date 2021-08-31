#include <string>
#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int
	main(void)
{
	ScavTrap	scavtrap1("Thomas");
	ScavTrap	scavtrap2("Marion");

	scavtrap1.attack("Marion");
	scavtrap2.takeDamage(scavtrap1.getAttackDamage());
	std::cout << "ScavTrap " << scavtrap2.getName() << " has " << scavtrap2.getHitPoint() << " hit points left" << std::endl;
	scavtrap2.beRepaired(12);
	std::cout << "ScavTrap " << scavtrap2.getName() << " has " << scavtrap2.getHitPoint() << " hit points left" << std::endl;
	scavtrap1.guardGate();
	scavtrap2.guardGate();
	return (0);
}
