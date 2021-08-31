#include <string>
#include <iostream>

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << "A Dog has been created" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "A Dog has been destroyed" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog
	&Dog::operator=(Dog const &rhs)
{
	_type = rhs._type;
	return (*this);
}

void
	Dog::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
}
