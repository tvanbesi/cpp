#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(void)
: AMateria("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(Cure const &)
: AMateria("cure")
{
}

AMateria
	*Cure::clone(void) const
{
	AMateria	*r = new Cure();

	//Maybe copy ?
	return (r);
}

void
	Cure::use(ICharacter &target)
{
	std::cout << "*heals " << target.getName() << "'s wounds*" << std::endl;
}
