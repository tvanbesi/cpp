#include <iostream>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (std::string name)
:
ClapTrap(name + "_clap_name"),
FragTrap(name),
ScavTrap(name),
_name(name)
{
	setHitPoint(FragTrap::getHitPoint());
	setEnergyPoint(ScavTrap::getEnergyPoint());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap " << getName() << " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamonTrap " << getName() << " has been destroyed" << std::endl;
}

void
	DiamondTrap::attack(std::string const & target)
{
	FragTrap::attack(target);
}

void
	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << _name << " and my grandparent class name is " << getName() << std::endl;
}
