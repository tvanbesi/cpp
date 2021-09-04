#include <string>
#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: _name(name)
{
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap " << _name << " has been created" << std::endl;
}

ClapTrap
	&ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs._name;
	_hitPoint = rhs._hitPoint;
	_energyPoint = rhs._energyPoint;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

void
	ClapTrap::setHitPoint(unsigned int value)
{
	_hitPoint = value;
}

unsigned int
	ClapTrap::getHitPoint(void) const
{
	return (_hitPoint);
}

void
	ClapTrap::setEnergyPoint(unsigned int value)
{
	_energyPoint = value;
}

unsigned int
	ClapTrap::getEnergyPoint(void) const
{
	return (_energyPoint);
}

void
	ClapTrap::setAttackDamage(unsigned int value)
{
	_attackDamage = value;
}

unsigned int
	ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

std::string
	ClapTrap::getName(void) const
{
	return (_name);
}

void
	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
}

void
	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint < amount)
	{
		_hitPoint = 0;
		std::cout << _name << " has taken " << _hitPoint << "points of damage" << std::endl;
	}
	else
	{
		_hitPoint -= amount;
		std::cout << _name << " has taken " << amount << " points of damage" << std::endl;
	}
}

void
	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoint += amount;
	std::cout << _name << " has recovered " << amount << " hit points" << std::endl;
}
