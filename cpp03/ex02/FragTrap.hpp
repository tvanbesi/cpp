#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap	&operator=(FragTrap const &rhs);
	void	attack(std::string const & target);
	void	highFivesGuys(void);

};

#endif
