#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int
	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*i = new Dog();
	const Animal	*j = new Cat();

	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	return (0);
}
