#include "Array.hpp"

#include <iostream>
#include <string>

int
	main(void)
{
	Array<int>	intArray1(3);

	intArray1[0] = 12;
	intArray1[1] = 42;
	intArray1[2] = -123;
	for (unsigned int i = 0; i < intArray1.size(); i++)
		std::cout << intArray1[i] << std::endl;
	std::cout << std::endl;
	//Out of bounds
	//std::cout << intArray1[3] << std::endl;

	Array<std::string>	strArray(5);
	strArray[0] = "Bonjour";
	strArray[1] = "comment";
	strArray[2] = "ca";
	strArray[3] = "va";
	strArray[4] = "?";
	for (unsigned int i = 0; i < strArray.size(); i++)
		std::cout << strArray[i] << std::endl;
	std::cout << std::endl;

	Array<int>	intArray2 = intArray1;
	intArray2[2] = 144;
	for (unsigned int i = 0; i < intArray1.size(); i++)
		std::cout << intArray1[i] << std::endl;
	for (unsigned int i = 0; i < intArray2.size(); i++)
		std::cout << intArray2[i] << std::endl;
	std::cout << std::endl;

	Array<int>	intArray3;
	intArray3 = intArray2;
	intArray3[2] = -155;
	for (unsigned int i = 0; i < intArray2.size(); i++)
		std::cout << intArray2[i] << std::endl;
	for (unsigned int i = 0; i < intArray3.size(); i++)
		std::cout << intArray3[i] << std::endl;

	return (0);
}
