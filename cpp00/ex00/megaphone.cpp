#include <iostream>

static void
	print_upperized(char *str)
{
	char	c;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			c = *str - 32;
			std::cout << c;
		}
		else
			std::cout << *str;
		str++;
	}
}

int
	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
		print_upperized(argv[i]);
	std::cout << std::endl;
	return (0);
}
