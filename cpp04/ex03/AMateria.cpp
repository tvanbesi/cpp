#include <iostream>
#include <string>

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
: _type(type)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(AMateria const &src)
: _type(src._type)
{
}

AMateria
	&AMateria::operator=(AMateria const &)
{
	return (*this);
}

std::string const
	&AMateria::getType() const
{
	return (_type);
}

void
	AMateria::use(ICharacter &)
{
}
