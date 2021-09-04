#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>

class Form;

class ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm(std::string const &target);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
	virtual void			execute(Bureaucrat const &executor) const;

};

#endif
