#include "conversion.hpp"

static int
	isDigit(char c)
{
	return (c >= '0' && c <= '9');
}

static int
	isChar(char *a)
{
	if (a[0] && !isDigit(a[0]) && !a[1])
		return (1);
	return (0);
}

static int
	isInt(char *a)
{
	if (*a == '-')
		a++;
	while (isDigit(*a))
		a++;
	if (*a)
		return (0);
	return (1);
}

static int
	isFloat(char *a)
{
	if (*a == '-')
		a++;
	while (isDigit(*a))
		a++;
	if (*a == '.')
		a++;
	else
		return (0);
	if (!isDigit(*a))
		return (0);
	while (isDigit(*a))
		a++;
	if (*a == 'f')
		a++;
	else
		return (0);
	if (*a)
		return (0);
	return (1);
}

static int
	isDouble(char *a)
{
	if (*a == '-')
		a++;
	while (isDigit(*a))
		a++;
	if (*a == '.')
		a++;
	else
		return (0);
	if (!isDigit(*a))
		return (0);
	while (isDigit(*a))
		a++;
	if (*a)
		return (0);
	return (1);
}

int
	getType(char *a)
{
	if (isChar(a))
		return (ISCHAR);
	else if (isInt(a))
		return (ISINT);
	else if (isFloat(a))
		return (ISFLOAT);
	else if (isDouble(a))
		return (ISDOUBLE);
	else
		return(ENOTYPE);
}
