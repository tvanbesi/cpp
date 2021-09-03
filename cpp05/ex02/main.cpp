#include <string>
#include <iostream>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int
	main(void)
{
	Bureaucrat				bureaucrat1("Thomas", 1);
	ShrubberyCreationForm	shrubform("maison");

	shrubform.beSigned(bureaucrat1);
	bureaucrat1.signForm(shrubform);
	shrubform.execute(bureaucrat1);
	return (0);
}
