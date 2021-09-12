#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {

public:

	Span(unsigned int N);
	~Span(void);
	Span(Span const &src);
	Span	&operator=(Span const &rhs);
	void	addNumber(int n);
	void	addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;

private:

	unsigned int		_size;
	std::vector<int>	_val;

};

#endif
