#include "span.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

static int
	randomNumber(void)
{
	return (std::rand() % 1000000);
}

int
	main(void)
{
	std::srand(std::time(0));

	Span	sp1 = Span(5);

	sp1.addNumber(5);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);

	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	Span	sp2 = Span(4);
	std::vector<int>	vector1(4, 100);

	sp2.addNumber(vector1.begin(), vector1.end());
	//Error span is full
	//sp2.addNumber(12);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	Span	sp3 = Span(100000);
	std::vector<int>	vector2(100000, 0);
	//Replace line 39 with unquoted line 41 : error span is too small
	//std::vector<int>	vector2(100001, 0);

	std::generate(vector2.begin(), vector2.end(), randomNumber);
	sp3.addNumber(vector2.begin(), vector2.end());
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	Span	sp4 = Span(1);
	//Error span is empty
	//std::cout << sp4.shortestSpan() << std::endl;
	//std::cout << sp4.longestSpan() << std::endl;
	sp4.addNumber(42);
	//Error span has only one value
	//std::cout << sp4.shortestSpan() << std::endl;
	//std::cout << sp4.longestSpan() << std::endl;

	return (0);
}
