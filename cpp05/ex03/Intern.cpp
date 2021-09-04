#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern
	&Intern::operator=(Intern const &)
{
	return (*this);
}

static Form	
	*createShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

static Form	
	*createRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

static Form	
	*createPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form
	*Intern::makeForm(std::string const &name, std::string const &target)
{
	Form	*r = 0;
	typedef Form* (*f)(std::string const &target);
	typedef struct { std::string name; f f; } form_types;

	form_types	forms[] = {
		{"shrubbery creation", &createShrubberyCreationForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"presidential pardon", &createPresidentialPardonForm}
	};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i].name == name)
		{
			r = forms[i].f(target);
			std::cout << "Intern creates " << r->getName() << std::endl;
			return (r);
		}
	}
	std::cout << "Intern could not create " << name << std::endl;
	return (r);
}
