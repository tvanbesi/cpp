#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

class Template {

public:

	Template(void);
	~Template(void);
	Template(Template const &src);
	Template	&operator=(Template const &rhs);

private:

};

std::ostream	&operator<<(std::ostream &o, Template const &i);

#endif
