#include <iostream>

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "An Animal has been created" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "An Animal has been destroyed" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal
	&Animal::operator=(Animal const &rhs)
{
	_type = rhs._type;
	return (*this);
}

std::string
	Animal::getType(void) const
{
	return (_type);
}

void
	Animal::makeSound(void) const
{
	std::cout << "*Undefined animal noise*" << std::endl;
}
