#include <string>

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_m[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
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
	return (NULL);
}
