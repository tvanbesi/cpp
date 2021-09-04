#include <string>
#include <iostream>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int
	main(void)
{
	Bureaucrat				bureaucrat1("Thomas", 1);
	Bureaucrat				bureaucrat2("Henri", 150);
	ShrubberyCreationForm	shrubform("maison");
	RobotomyRequestForm		roboform("Alex");
	PresidentialPardonForm	presform("some dude");

	shrubform.beSigned(bureaucrat1);
	bureaucrat1.signForm(shrubform);
	bureaucrat1.executeForm(shrubform);
	shrubform.execute(bureaucrat1);

	roboform.beSigned(bureaucrat1);
	bureaucrat1.signForm(roboform);
	bureaucrat1.executeForm(roboform);
	roboform.execute(bureaucrat1);

	presform.beSigned(bureaucrat1);
	bureaucrat1.signForm(presform);
	bureaucrat1.executeForm(presform);
	presform.execute(bureaucrat1);

	PresidentialPardonForm	presform_unsigned("Jean");

	bureaucrat2.executeForm(presform_unsigned);
	presform_unsigned.execute(bureaucrat2);

	bureaucrat2.executeForm(roboform);
	roboform.execute(bureaucrat2);
	return (0);
}
