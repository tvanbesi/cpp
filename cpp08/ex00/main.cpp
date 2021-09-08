#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

int
	main(void)
{
	std::vector<int>::iterator	vectorIt;

	std::vector<int>	intVector;
	for (int i = 0; i < 10; i++)
		intVector.push_back(i);
	vectorIt = easyfind(intVector, 0);
	std::cout << *vectorIt << std::endl;
	vectorIt = easyfind(intVector, 5);
	std::cout << *vectorIt << std::endl;
	//Exception thrown
	//it = easyfind(intVector, 44);
	//std::cout << *it << std::endl;

	std::list<int>::iterator	listIt;

	std::list<int>		intList;
	for (int i = 0; i < 10; i++)
		intList.push_back(i);
	listIt = easyfind(intList, 0);
	std::cout << *listIt << std::endl;
	listIt = easyfind(intList, 5);
	std::cout << *listIt << std::endl;
	//Exception thrown
	//listIt = easyfind(intList, 44);
	//std::cout << *listIt << std::endl;

	return (0);
}
