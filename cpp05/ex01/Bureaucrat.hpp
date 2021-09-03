#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Form;

class Bureaucrat {

public:

	Bureaucrat(std::string const name, unsigned int grade);
	~Bureaucrat(void);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat			&operator=(Bureaucrat const &rhs);
	std::string const	getName(void) const;
	unsigned int		getGrade(void) const;
	void				upgrade(void);
	void				downgrade(void);
	void				signForm(Form &f) const;
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
	unsigned int		_grade;

};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &i);

#endif
