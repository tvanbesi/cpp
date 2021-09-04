#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade)
: _name(name)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
	}
	catch (GradeTooHighException &e)
	{
		std::cout << "Can't create Bureaucrat, grade is too high" << std::endl;
		throw GradeTooHighException();
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Can't create Bureaucrat, grade is too low" << std::endl;
		throw GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
: _name(src._name)
{
	_grade = src._grade;
}

Bureaucrat
	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return (*this);
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

void
	Bureaucrat::upgrade(void)
{
	try
	{
		if (_grade == 1)
			throw GradeTooHighException();
		_grade--;
	}
	catch (GradeTooHighException &e)
	{
		std::cout << "Can't upgrade bureaucrat, grade is too high" << std::endl;
	}
}

void
	Bureaucrat::downgrade(void)
{
	try
	{
		if (_grade == 150)
			throw GradeTooLowException();
		_grade++;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Can't downgrade bureaucrat, grade is too low" << std::endl;
	}
}

void
	Bureaucrat::signForm(Form &f) const
{
	if (_grade <= f.getGradeToSign())
		std::cout << _name << " signs " << f.getName() << std::endl;
	else
		std::cout << _name << " can't sign because grade " << _grade << " < " << f.getGradeToSign() << std::endl;
}

void
	Bureaucrat::executeForm(Form &f) const
{
	if (!f.getIsSigned())
		std::cout << _name << " can't execute form because it's not signed" << std::endl;
	else if (_grade > f.getGradeToExec())
		std::cout << _name << " can't execute form because his grade is too low" << std::endl;
	else
		std::cout << _name << " executes " << f.getName() << std::endl;
}

const char
	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char
	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream
	&operator<<(std::ostream &o, const Bureaucrat &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
