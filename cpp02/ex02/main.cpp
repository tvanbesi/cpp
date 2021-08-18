#include <iostream>
#include "Fixed.hpp"

int
	main(void)
{
	Fixed	a, b, c, d, e;
	Fixed const	ca = 12, cb = 13;

	a = 1;
	b = 2;
	c = a + b;
	d = b * c;
	e = a / b;
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << "a > b ? " << (a > b) << std::endl;
	std::cout << "a + b = c = " << c << std::endl;
	std::cout << "b * c = " << d << std::endl;
	std::cout << "a / b = " << e << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--b = " << --b << std::endl;
	std::cout << "b-- = " << b-- << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min(" << a << ", " << b << ") = " << Fixed::min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ") = " << Fixed::max(a, b) << std::endl;
	std::cout << "min(" << ca << ", " << cb << ") = " << Fixed::min(ca, cb) << std::endl;
	std::cout << "max(" << ca << ", " << cb << ") = " << Fixed::max(ca, cb) << std::endl;
	return (0);
}
