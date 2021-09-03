#include <iostream>

#include "Template.hpp"

Template::Template(void)
{
}

Template::~Template(void)
{
}

Template::Template(Template const &src)
{
	//*this = src; //Shallow copy
}

Template
	&Template::operator=(Template const &rhs)
{
	//copy members
	return (*this);
}

std::ostream
	&operator<<(std::ostream &o, const Template &i)
{
	std::cout << "Print some stuff from i";
	return (o);
}
