#include "conversion.hpp"

int
	main(int argc, char **argv)
{
	int			type;
	std::string	input;

	if (argc != 2)
	{
		std::cout << "Invalid argument count" << std::endl;
		return (-1);
	}
	type = getType(argv[1]);
	input = argv[1];
	if (type == ISCHAR)
		convert_c(argv[1][0]);
	else if (type == ISINT)
		convert_i(std::stoi(input));
	else if (type == ISFLOAT)
		convert_f(std::stof(input));
	else if (type == ISDOUBLE)
		convert_d(std::stod(input));
	else
	{
		std::cout << "Invalid input" << std::endl;
		return (-1);
	}
	return (0);
}
