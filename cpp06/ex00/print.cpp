#include "conversion.hpp"

static void
	show_c(char c)
{
	if (c >= 32 && c <= 126)
		std::cout << "'" << c << "'";
	else
		std::cout << "Not displayable";
	std::cout << std::endl;
}

static void
	show_f(float f)
{
	float	intPart;

	std::cout << f;
	if (f == std::numeric_limits<float>::infinity()
	|| f == -std::numeric_limits<float>::infinity())
		std::cout << "f";
	else if (modff(f, &intPart) == 0.0f)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;
}

static void
	show_d(double d)
{
	double	intPart;

	std::cout << d;
	if (d == std::numeric_limits<double>::infinity()
	|| d == -std::numeric_limits<double>::infinity())
		;
	else if (modf(d, &intPart) == 0.0)
		std::cout << ".0";
	std::cout << std::endl;
}

void
	convert_c(char c)
{
	std::cout << "char: ";
	show_c(c);
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: ";
	show_f(static_cast<float>(c));
	std::cout << "double: ";
	show_d(static_cast<double>(c));
}

void
	convert_i(int i)
{
	std::cout << "char: ";
	if (i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max())
		show_c(static_cast<char>(i));
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: ";
	show_f(static_cast<float>(i));
	std::cout << "double: ";
	show_d(static_cast<double>(i));
}

void
	convert_f(float f)
{
	std::cout << "char: ";
	if (f >= std::numeric_limits<char>::min() && f <= std::numeric_limits<char>::max())
		show_c(static_cast<char>(f));
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (f >= std::numeric_limits<int>::min() && f <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(f) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
	show_f(f);
	std::cout << "double: ";
	show_d(static_cast<double>(f));
}

void
	convert_d(double d)
{
	std::cout << "char: ";
	if (d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max())
		show_c(static_cast<char>(d));
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(d) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
	if (d != d || d == std::numeric_limits<double>::infinity() || d == -std::numeric_limits<double>::infinity()
	|| (d >= std::numeric_limits<float>::min() && d <= std::numeric_limits<float>::max()))
		show_f(static_cast<float>(d));
	else
		std::cout << "impossible" << std::endl;
	std::cout << "double: ";
	show_d(d);
}
