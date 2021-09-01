#include <string>
#include <iostream>

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "A Dog has been created" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "A Dog has been destroyed" << std::endl;
}

Dog::Dog(Dog const &src)
{
	_type = src._type;
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = src._brain->ideas[i];
	std::cout << "A Dog has been created" << std::endl;
}

Dog
	&Dog::operator=(Dog const &rhs)
{
	_type = rhs._type;
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = rhs._brain->ideas[i];
	return (*this);
}

Brain
	*Dog::getBrain(void) const
{
	return (_brain);
}

void
	Dog::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
}
