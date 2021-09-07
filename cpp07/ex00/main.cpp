#include <iostream>

#include "whatever.hpp"

int
	main(void)
{
	int	a = 1, b = 2;

	std::cout << a << "\t" << b << std::endl;
	::swap(a, b);
	std::cout << a << "\t" << b << std::endl;

	double c = 12.3, d = -4.4;

	std::cout << ::max(c, d) << std::endl;
	std::cout << ::min(c, d) << std::endl;

	return (0);
}
