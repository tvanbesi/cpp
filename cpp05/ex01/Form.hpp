#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form {

public:

	Form(std::string name, unsigned int const grade_to_sign, unsigned int const grade_to_exec);
	~Form(void);
	Form(Form const &src);
	Form				&operator=(Form const &rhs);
	std::string const	getName(void) const;
	bool				getIsSigned(void) const;
	unsigned int		getGradeToSign(void) const;
	unsigned int		getGradeToExec(void) const;
	void				beSigned(Bureaucrat &b);
	class GradeTooHighException : public std::exception {

	public:

		virtual const char	*what() const throw();

	};
	class GradeTooLowException : public std::exception {

	public:

		virtual const char	*what() const throw();

	};

private:

	std::string const	_name;
	unsigned int const	_grade_to_sign;
	unsigned int const	_grade_to_exec;
	bool				_issigned;

};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
