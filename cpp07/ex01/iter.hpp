#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void
	iter(T *a, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(a[i]);
}

template <typename T>
void
	show(T &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void
	addOne(T &a)
{
	a++;
}

#endif
