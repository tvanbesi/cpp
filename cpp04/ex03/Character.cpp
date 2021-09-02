#include <string>

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name)
: _name(name)
{
	for (int i = 0; i < 4; i++)
		_m[i] = 0;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete _m[i];
}

Character::Character(Character const &src)
: _name(src._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._m[i])
			_m[i] = src._m[i]->clone();
		else
			_m[i] = 0;
	}
}

Character
	&Character::operator=(Character const &rhs)
{
	_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (_m[i])
			delete _m[i];
		if (rhs._m[i])
			_m[i] = rhs._m[i]->clone();
		else
			_m[i] = 0;
	}
	return (*this);
}

std::string const
	&Character::getName(void) const
{
	return (_name);
}

void
	Character::equip(AMateria *m)
{
	int	i = 0;

	while (_m[i])
		i++;
	if (i < 4)
		_m[i] = m;
}

void
	Character::unequip(int idx)
{
	if (_m[idx])
		_m[idx] = 0;
}

void
	Character::use(int idx, ICharacter &target)
{
	if (_m[idx])
		_m[idx]->use(target);
}
