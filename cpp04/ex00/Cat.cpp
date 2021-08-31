#include <string>
#include <iostream>

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "A Cat has been created" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "A Cat has been destroyed" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
}

Cat
	&Cat::operator=(Cat const &rhs)
{
	_type = rhs._type;
	return (*this);
}

void
	Cat::makeSound(void) const
{
	std::cout << "*Miaou*" << std::endl;
}
