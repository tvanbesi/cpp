#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string name)
: ClapTrap(name)
{
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " has been created" << std::endl;
}

FragTrap::~FragTrap (void)
{
	std::cout << "FragTrap " << getName() << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
: ClapTrap(src)
{
	std::cout << "FragTrap " << getName() << " has been created" << std::endl;
}

FragTrap
	&FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void
	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage" << std::endl;
}

void
	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " wants to highfive" << std::endl;
}
