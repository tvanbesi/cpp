#include <string>
#include <iostream>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int
	main(void)
{
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	Bureaucrat	bureaucrat1("Thomas", 1);
	bureaucrat1.signForm(*rrf);
	rrf->beSigned(bureaucrat1);
	bureaucrat1.executeForm(*rrf);
	rrf->execute(bureaucrat1);

	return (0);
}
