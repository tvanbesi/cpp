#include <string>

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_m[i] = 0;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete _m[i];
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._m[i])
			_m[i] = src._m[i]->clone();
		else
			_m[i] = 0;
	}
}

MateriaSource
	&MateriaSource::operator=(MateriaSource const &rhs)
{
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

void
	MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;

	while (_m[i])
		i++;
	if (i < 4)
		_m[i] = m;
}

AMateria
	*MateriaSource::createMateria(std::string const &type)
{
	int	i = 0;

	while (i < 4)
	{
		if (_m[i] && _m[i]->getType() == type)
			return (_m[i]->clone());
		i++;
	}
	return (0);
}
