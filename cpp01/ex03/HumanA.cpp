#include <iostream>
#include <string>

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

std::string
	HumanA::getName(void) const
{
	return (this->_name);
}

void
	HumanA::setName(std::string name)
{
	this->_name = name;
}

void
	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

void
	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
