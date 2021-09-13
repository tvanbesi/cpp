#include <iostream>

#include "mutantstack.hpp"

int
	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int>		s(mstack);
	MutantStack<int>	mstack2 = mstack;

	it = mstack2.begin();
	ite = mstack2.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<double>	dstack;

	dstack.push(11.5);
	dstack.push(42.42);

	MutantStack<double>::iterator dit = dstack.begin();
	MutantStack<double>::iterator dite = dstack.end();
	++dit;
	--dit;
	while (dit != dite)
	{
		std::cout << *dit << std::endl;
		++dit;
	}
	return (0);
}
