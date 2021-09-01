#include <string>
#include <iostream>

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "A Cat has been created" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "A Cat has been destroyed" << std::endl;
}

Cat::Cat(Cat const &src)
{
	_type = src._type;
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = src._brain->ideas[i];
	std::cout << "A Cat has been created" << std::endl;
}

Cat
	&Cat::operator=(Cat const &rhs)
{
	_type = rhs._type;
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = rhs._brain->ideas[i];
	return (*this);
}

Brain
	*Cat::getBrain(void) const
{
	return (_brain);
}

void
	Cat::makeSound(void) const
{
	std::cout << "*Miaou*" << std::endl;
}
