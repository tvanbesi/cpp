#include <string>
#include <iostream>

#include "ClapTrap.hpp"

int
	main(void)
{
	ClapTrap	claptrap1("Thomas");
	ClapTrap	claptrap2("Marion");

	claptrap1.attack("Marion");
	claptrap2.takeDamage(claptrap1.getAttackDamage());
	std::cout << "ClapTrap " << claptrap2.getName() << " has " << claptrap2.getHitPoint() << " hit points left" << std::endl;
	claptrap1.setAttackDamage(5);
	claptrap1.attack("Marion");
	claptrap2.takeDamage(claptrap1.getAttackDamage());
	std::cout << "ClapTrap " << claptrap2.getName() << " has " << claptrap2.getHitPoint() << " hit points left" << std::endl;
	claptrap2.beRepaired(9);
	std::cout << "ClapTrap " << claptrap2.getName() << " has " << claptrap2.getHitPoint() << " hit points left" << std::endl;
	return (0);
}
