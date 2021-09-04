#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern {

public:

	Intern(void);
	~Intern(void);
	Intern(Intern const &src);
	Intern	&operator=(Intern const &rhs);
	Form	*makeForm(std::string const &name, std::string const &target);

};

#endif
