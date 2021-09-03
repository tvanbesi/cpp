#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

int
	main(void)
{
	Bureaucrat	bureaucrat1("Thomas", 75);

	std::cout << bureaucrat1.getName() << " " << bureaucrat1.getGrade() << std::endl;
	
	//Runtime error: grade too high
	//Bureaucrat	bureaucrat2("Jean", 0);

	//Runtime error: grade too low
	//Bureaucrat	bureaucrat2("Henri", 151);
	return (0);
}
