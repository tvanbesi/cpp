#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
: Form("PresidentialPardonForm", 25, 5, target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
: Form(src)
{
}

PresidentialPardonForm
	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void
	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!getIsSigned())
			throw FormNotSignedException();
		else if (executor.getGrade() > getGradeToExec())
			throw GradeTooLowException();
		std::cout << getTarget() << " a ete pardonne par Zafod Beeblebrox" << std::endl;
	}
	catch (FormNotSignedException &e)
	{
		std::cout << "Can't execute form, it's not signed" << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Can't execute form, grade is too low" << std::endl;
	}
}
