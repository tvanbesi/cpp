#include <iostream>
#include <string>

#include "Brain.hpp"

Brain::Brain(void)
{
	ideas[0] = "Hello";
	ideas[1] = "Bonjour";
	ideas[2] = "Comment";
	ideas[3] = "ca";
	ideas[4] = "va";
	ideas[5] = "?";
	std::cout << "A Brain has been created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "A Brain has been destroyed" << std::endl;
}
