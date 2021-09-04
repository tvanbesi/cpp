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

unsigned int
	ClapTrap::getHitPoint(void)
{
	return (_hitPoint);
}

void
	ClapTrap::setAttackDamage(unsigned int value)
{
	_attackDamage = value;
}

unsigned int
	ClapTrap::getAttackDamage(void)
{
	return (_attackDamage);
}

std::string
	ClapTrap::getName(void)
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
		std::cout << "ClapTrap " << _name << " has taken " << _hitPoint << "points of damage" << std::endl;
	}
	else
	{
		_hitPoint -= amount;
		std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage" << std::endl;
	}
}

void
	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoint += amount;
	std::cout << "ClapTrap " << _name << " has recovered " << amount << " points of damage" << std::endl;
}
