#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class Array {

public:

	Array(void) : _size(0), _val(0) {};
	~Array(void) { delete []_val; };
	Array(unsigned int n) : _size(n), _val(new T[n]) {};
	Array(Array const &src) : _size(src._size)
	{
		_val = new T[src._size];
		for (unsigned int i = 0; i < src._size; i++)
			_val[i] = src._val[i];
	};
	Array			&operator=(Array const &rhs)
	{
		delete []_val;
		_val = new T[rhs._size];
		_size = rhs._size;
		for (unsigned int i = 0; i < rhs._size; i++)
			_val[i] = rhs._val[i];
		return (*this);
	};
	T				&operator[](unsigned int i)
	{
		if (i >= _size)
			throw oobException();
		return (_val[i]);
	};

	unsigned int	size(void) const { return (_size); };

	class oobException : public std::exception {

		public:

			virtual const char	*what() const throw() { return ("Out of bounds"); };

	};

private:

	unsigned int	_size;
	T				*_val;

};

#endif
