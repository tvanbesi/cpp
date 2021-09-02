#include <string>

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name)
: _name(name)
{
	for (int i = 0; i < 4; i++)
		_m[i] = NULL;
}

Character::~Character(void)
{
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
	_m[idx] = NULL;
}

void
	Character::use(int idx, ICharacter &target)
{
	_m[idx]->use(target);
}
