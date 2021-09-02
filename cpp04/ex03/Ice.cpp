#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void)
: AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(Ice const &)
: AMateria("ice")
{
}

AMateria
	*Ice::clone(void) const
{
	AMateria	*r = new Ice();

	//Maybe copy ?
	return (r);
}

void
	Ice::use(ICharacter &target)
{
	std::cout << "*shoots and ice bolt at " << target.getName() << "*" << std::endl;
}
