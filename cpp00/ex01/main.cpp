#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

int
	main(void)
{
	PhoneBook	phoneBook;
	bool		run;
	std::string	input;

	run = true;
	while (run)
	{
		std::cout << "Please type ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phoneBook.addContact();
		else if (input.compare("SEARCH") == 0)
		{
			phoneBook.showPhoneBook();
			std::cout << "Enter index to see contact info: ";
			std::getline(std::cin, input);
			if (input.length() == 1 && input[0] >= '0' && input[0] <= '9'
			&& input[0] - '0' < phoneBook._getNContact())
				phoneBook.showContactInfo(input[0] - '0');
			else
				std::cout << "Wrong input" << std::endl;
		}
		else if (input.compare("EXIT") == 0)
			run = false;
	}
}
