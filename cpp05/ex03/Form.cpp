#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(std::string name, unsigned int const grade_to_sign, unsigned int const grade_to_exec, std::string const &target)
: _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), _target(target)

{
	try
	{
		_issigned = false;
		if (grade_to_sign < 1 || grade_to_exec < 1)
			throw GradeTooHighException();
		else if (grade_to_sign > 150 || grade_to_exec > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooHighException &e)
	{
		std::cout << "Can't create Form, grade is too high" << std::endl;
		throw GradeTooHighException();
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Can't create Form, grade is too low" << std::endl;
		throw GradeTooLowException();
	}
}

Form::~Form(void)
{
}

Form::Form(Form const &src)
: _name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_exec(src._grade_to_exec), _target(src._target)
{
	_issigned = src._issigned;
}

Form
	&Form::operator=(Form const &rhs)
{
	_issigned = rhs._issigned;
	return (*this);
}

std::string const
	Form::getName(void) const
{
	return (_name);
}

bool
	Form::getIsSigned(void) const
{
	return (_issigned);
}

unsigned int
	Form::getGradeToSign(void) const
{
	return (_grade_to_sign);
}

unsigned int
	Form::getGradeToExec(void) const
{
	return (_grade_to_exec);
}

std::string const
	Form::getTarget(void) const
{
	return (_target);
}

void
	Form::beSigned(Bureaucrat &b)
{
	try
	{
		if (b.getGrade() <= _grade_to_sign)
			_issigned = true;
		else
			throw GradeTooLowException();
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Can't sign form, grade is too low" << std::endl;
	}
}

const char
	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char
	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char
	*Form::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
}

std::ostream
	&operator<<(std::ostream &o, const Form &i)
{
	std::cout << i.getName() << ". grade required to sign: " << i.getGradeToSign();
	std::cout << ". grade required to execute : " << i.getGradeToExec();
	std::cout << ". signed : " << i.getIsSigned();
	return (o);
}
