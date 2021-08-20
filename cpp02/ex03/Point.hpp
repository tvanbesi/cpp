#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

public:

	Point(void);
	Point(Point const &src);
	Point(Fixed const &x, Fixed const &y);
	~Point(void);
	Point	&operator=(Point const &rhs);

private:

	Fixed const	_x;
	Fixed const _y;

};

#endif
