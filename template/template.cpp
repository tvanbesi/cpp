# include "template.hpp"

Template::Template(void)
{
}

Template::~Template(void)
{
}

Template::Template(Template const &src)
{
	*this = src;
}

Template
	Template::&operator=(Template const &rhs)
{
	//copy members
}
