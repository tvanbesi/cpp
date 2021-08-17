#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

//# include <iostream>

class Template {

public:

	Template(void);
	Template(Template const &src);
	~Template(void);
	Template	&operator=(Template const &rhs);

private:

};

//std::ostream	&operator<<(std::ostream &o, Template const &i);

#endif
