#include "span.hpp"

Span::Span(unsigned int N)
: _size(N)
{
}

Span::~Span(void)
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span
	&Span::operator=(Span const &rhs)
{
	_size = rhs._size;
	_val = rhs._val;
	return (*this);
}

void
	Span::addNumber(int n)
{
	if (_val.size() == _size)
		throw std::exception();
	_val.push_back(n);
}

void
	Span::addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
	if (static_cast<unsigned long>(end - beg) > _size - _val.size())
		throw std::exception();
	while (beg != end)
	{
		_val.push_back(*beg);
		beg++;
	}
}

int
	Span::shortestSpan(void) const
{
	if (_val.empty() || _val.size() == 1)
		throw std::exception();
	std::vector<int>	cpy = _val;
	std::sort(cpy.begin(), cpy.end());
	return (cpy[1] - cpy[0]);
}

int
	Span::longestSpan(void) const
{
	if (_val.empty() || _val.size() == 1)
		throw std::exception();
	return (*std::max_element(_val.begin(), _val.end())
			- *std::min_element(_val.begin(), _val.end()));
}
