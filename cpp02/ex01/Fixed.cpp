#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_val = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = n << Fixed::_nFrac;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(n * (1 << Fixed::_nFrac));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed
	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return (*this);
}

int
	Fixed::getRawBits(void) const
{
	return (this->_val);
}

void
	Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}

float
	Fixed::toFloat(void) const
{
	return ((float)(this->_val) / (1 << Fixed::_nFrac));
}

int
	Fixed::toInt(void) const
{
	return (this->_val >> Fixed::_nFrac);
}

std::ostream
	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
