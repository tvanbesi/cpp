#include <fstream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
: Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
: Form(src)
{
}

ShrubberyCreationForm
	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void
	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	ofs;
	std::string		ofs_name;

	try
	{
		if (!getIsSigned())
			throw FormNotSignedException();
		else if (executor.getGrade() > getGradeToExec())
			throw GradeTooLowException();
		ofs_name = getTarget() + "_shrubbery";
		ofs.open(ofs_name.c_str());
		ofs << "                     .o00o\n";
		ofs << "                   o000000oo\n";
		ofs << "                  00000000000o\n";
		ofs << "                 00000000000000\n";
		ofs << "              oooooo  00000000  o88o\n";
		ofs << "           ooOOOOOOOoo  ```''  888888\n";
		ofs << "         OOOOOOOOOOOO'.qQQQQq. `8888'\n";
		ofs << "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n";
		ofs << "        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n";
		ofs << "         OOOOOOOOO QQQQQQQQQQ/ /QQ\n";
		ofs << "           OOOOOOOOO `QQQQQQ/ /QQ'\n";
		ofs << "             OO:F_P:O `QQQ/  /Q'\n";
		ofs << "                ||. | |  // |\n";
		ofs << "                d| ||||_////\n";
		ofs << "                qP| || _' `|Ob\n";
		ofs << "                   |  / |  |Op\n";
		ofs << "                   |  | O| ||n\n";
		ofs << "           _       /|. |_/ /||n\n";
		ofs << "            `---__/|_||   //|  __\n";
		ofs << "                  `-'  `-'`-'-'";
		ofs.close();
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
