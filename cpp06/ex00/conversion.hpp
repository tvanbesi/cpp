#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <cstdlib>

typedef enum	e_type
{
	ENOTYPE,
	ISCHAR,
	ISINT,
	ISFLOAT,
	ISDOUBLE,
	ISSPECIAL
}				t_type;

int		getType(char *a);

void	convert_c(char c);
void	convert_i(int i);
void	convert_f(float f);
void	convert_d(double d);

#endif
