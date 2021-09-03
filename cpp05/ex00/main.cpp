#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

int
	main(void)
{
	Bureaucrat	bureaucrat1("Thomas", 2);
	Bureaucrat	bureaucrat2("Antoine", 150);

	std::cout << bureaucrat1 << std::endl;
	bureaucrat1.upgrade();
	std::cout << bureaucrat1 << std::endl;
	//Error
	//bureaucrat1.upgrade();

	std::cout << bureaucrat2 << std::endl;
	//Error
	//bureaucrat2.downgrade();
	
	//Error
	//Bureaucrat	bureaucrat3("Jean", 0);

	//Error
	//Bureaucrat	bureaucrat4("Henri", 151);
	return (0);
}
