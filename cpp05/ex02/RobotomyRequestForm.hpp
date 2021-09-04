#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);
	virtual void			execute(Bureaucrat const &executor) const;

};

#endif
