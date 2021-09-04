#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string name)
: ClapTrap(name)
{
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " has been created" << std::endl;
}

ScavTrap::~ScavTrap (void)
{
	std::cout << "ScavTrap " << getName() << " has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
: ClapTrap(src)
{
	std::cout << "ScavTrap " << getName() << " has been created" << std::endl;
}

ScavTrap
	&ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void
	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage" << std::endl;
}

void
	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " has entered guard mode" << std::endl;
}
