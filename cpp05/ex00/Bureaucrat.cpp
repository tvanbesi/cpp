#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade)
: _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
: _name(src._name)
{
	_grade = src._grade;
}

std::string const
	Bureaucrat::getName(void) const
{
	return (_name);
}

unsigned int
	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

const char
	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Can't create Bureaucrat instance: grade is too high");
}

const char
	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Can't create Bureaucrat instance: grade is too low");
}
