#include <string>
#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	FragTrap	fragtrap1("Henri");
	FragTrap	fragtrap2("Lea");

	fragtrap1.attack("Lea");
	fragtrap2.takeDamage(fragtrap1.getAttackDamage());
	std::cout << "ScavTrap " << fragtrap2.getName() << " has " << fragtrap2.getHitPoint() << " hit points left" << std::endl;
	fragtrap2.beRepaired(12);
	std::cout << "ScavTrap " << fragtrap2.getName() << " has " << fragtrap2.getHitPoint() << " hit points left" << std::endl;
	fragtrap1.highFivesGuys();
	fragtrap2.highFivesGuys();
	return (0);
}
