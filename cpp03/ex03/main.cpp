#include <string>
#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int
	main(void)
{
	DiamondTrap	diamondtrap("Thomas");

	diamondtrap.guardGate();
	diamondtrap.highFivesGuys();
	diamondtrap.attack("enemy");
	diamondtrap.whoAmI();
	return (0);
}
