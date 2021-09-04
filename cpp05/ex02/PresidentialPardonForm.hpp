#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
	virtual void			execute(Bureaucrat const &executor) const;

};

#endif
