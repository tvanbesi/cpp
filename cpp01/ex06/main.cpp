#include <iostream>

#include "Karen.hpp"

int	getComplainLevel(std::string level);

int
	main(int argc, char **argv)
{
	Karen		karen;
	int			complainLevel;
	std::string	level;

	if (argc != 2)
		return (-1);
	level = argv[1];
	complainLevel = getComplainLevel(level);
	switch (complainLevel)
	{
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
