#include "Point.hpp"

Point::Point(void)
{
}

Point::Point(Point const &src)
: _x(src._x), _y(src._y)
{
}

Point::Point(Fixed const &x, Fixed const &y)
: _x(x), _y(y)
{
}

Point::~Point(void)
{
}

Point
	&Point::operator=(Point const &rhs)
{

}
