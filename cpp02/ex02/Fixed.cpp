#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_val = 0;
}

Fixed::Fixed(int const n)
{
	this->_val = n << Fixed::_nFrac;
}

Fixed::Fixed(float const n)
{
	this->_val = roundf(n * (1 << Fixed::_nFrac));
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed
	&Fixed::operator=(Fixed const &rhs)
{
	this->_val = rhs.getRawBits();
	return (*this);
}

bool
	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool
	Fixed::operator<(Fixed const &rhs) const
{
	return (rhs > *this);
}

bool
	Fixed::operator>=(Fixed const &rhs) const
{
	return (!(*this > rhs));
}

bool
	Fixed::operator<=(Fixed const &rhs) const
{
	return (!(*this < rhs));
}

bool
	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool
	Fixed::operator!=(Fixed const &rhs) const
{
	return (!(*this == rhs));
}

Fixed
	Fixed::operator+(Fixed const &rhs) const
{
	Fixed	r;

	r.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (r);
}

Fixed
	Fixed::operator-(Fixed const &rhs) const
{
	Fixed	r;

	r.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (r);
}

Fixed
	Fixed::operator*(Fixed const &rhs) const
{
	Fixed	r;

	r.setRawBits((this->getRawBits() * rhs.getRawBits()) >> Fixed::_nFrac);
	return (r);
}

Fixed
	Fixed::operator/(Fixed const &rhs) const
{
	Fixed	r;

	r.setRawBits(this->getRawBits() / (rhs.getRawBits() >> Fixed::_nFrac));
	return (r);
}

Fixed
	&Fixed::operator++()
{
	this->_val++;
	return (*this);
}

Fixed
	Fixed::operator++(int)
{
	Fixed	old = *this;
	operator++();
	return (old);
}

Fixed
	&Fixed::operator--()
{
	this->_val--;
	return (*this);
}

Fixed
	Fixed::operator--(int)
{
	Fixed	old = *this;
	operator--();
	return (old);
}

Fixed
	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed
	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed
	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed
	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
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
