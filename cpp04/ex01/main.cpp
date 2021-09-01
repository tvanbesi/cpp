#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int
	main(void)
{
	Animal	*meute[20];

	for (int i = 0; i < 10; i++)
		meute[i] = new Dog();
	for (int i = 10; i < 20; i++)
		meute[i] = new Cat();
	for (int i = 0; i < 20; i++)
		delete meute[i];

	Dog	dog1, dog2;
	dog1.getBrain()->ideas[0] = "Manger";
	dog1.getBrain()->ideas[1] = "Dormir";
	dog1.getBrain()->ideas[2] = "Croquer";
	std::cout << "dog1 idea 1: " << &(dog1.getBrain()->ideas[0]) << "\t" << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "dog1 idea 2: " << &(dog1.getBrain()->ideas[1]) << "\t" << dog1.getBrain()->ideas[1] << std::endl;
	std::cout << "dog1 idea 3: " << &(dog1.getBrain()->ideas[2]) << "\t" << dog1.getBrain()->ideas[2] << std::endl;
	std::cout << "dog2 idea 1: " << &(dog2.getBrain()->ideas[0]) << "\t" << dog2.getBrain()->ideas[0] << std::endl;
	std::cout << "dog2 idea 2: " << &(dog2.getBrain()->ideas[1]) << "\t" << dog2.getBrain()->ideas[1] << std::endl;
	std::cout << "dog2 idea 3: " << &(dog2.getBrain()->ideas[2]) << "\t" << dog2.getBrain()->ideas[2] << std::endl;
	std::cout << "dog2 = dog1" << std::endl;
	dog2 = dog1;
	std::cout << "dog1 idea 1: " << &(dog1.getBrain()->ideas[0]) << "\t" << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "dog1 idea 2: " << &(dog1.getBrain()->ideas[1]) << "\t" << dog1.getBrain()->ideas[1] << std::endl;
	std::cout << "dog1 idea 3: " << &(dog1.getBrain()->ideas[2]) << "\t" << dog1.getBrain()->ideas[2] << std::endl;
	std::cout << "dog2 idea 1: " << &(dog2.getBrain()->ideas[0]) << "\t" << dog2.getBrain()->ideas[0] << std::endl;
	std::cout << "dog2 idea 2: " << &(dog2.getBrain()->ideas[1]) << "\t" << dog2.getBrain()->ideas[1] << std::endl;
	std::cout << "dog2 idea 3: " << &(dog2.getBrain()->ideas[2]) << "\t" << dog2.getBrain()->ideas[2] << std::endl;
	std::cout << "Dog dog3 = dog2" << std::endl;
	Dog dog3 = dog2;
	std::cout << "dog2 idea 1: " << &(dog2.getBrain()->ideas[0]) << "\t" << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "dog2 idea 2: " << &(dog2.getBrain()->ideas[1]) << "\t" << dog1.getBrain()->ideas[1] << std::endl;
	std::cout << "dog2 idea 3: " << &(dog2.getBrain()->ideas[2]) << "\t" << dog1.getBrain()->ideas[2] << std::endl;
	std::cout << "dog3 idea 1: " << &(dog3.getBrain()->ideas[0]) << "\t" << dog2.getBrain()->ideas[0] << std::endl;
	std::cout << "dog3 idea 2: " << &(dog3.getBrain()->ideas[1]) << "\t" << dog2.getBrain()->ideas[1] << std::endl;
	std::cout << "dog3 idea 3: " << &(dog3.getBrain()->ideas[2]) << "\t" << dog2.getBrain()->ideas[2] << std::endl;
	return (0);
}
