#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int
	main(void)
{
	//Ne compile pas
	//Animal	*animal1 = new Animal();

	//Compile
	Animal	*animal2 = new Dog();
	delete animal2;
	return (0);
}
