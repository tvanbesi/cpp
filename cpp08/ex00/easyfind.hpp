#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

template<typename T>
typename T::iterator
	easyfind(T &cont, int to_find)
{
	typename T::iterator	r;

	r = std::find(cont.begin(), cont.end(), to_find);
	if (r == cont.end())
		throw std::exception();
	return (r);
}

#endif
