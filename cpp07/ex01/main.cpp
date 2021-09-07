#include "iter.hpp"

int
	main(void)
{
	int		a[] = {1, 2, 3, 4, 5};
	size_t	size = 5;

	iter(a, size, show);
	iter(a, size, addOne);
	std::cout << std::endl;
	iter(a, size, show);

	std::string	s[] = {"Hello", "bonjour", "salut"};
	size = 3;

	std::cout << std::endl;
	iter(s, size, show);

	return (0);
}
