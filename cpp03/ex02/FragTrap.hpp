#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap(std::string name);
	~FragTrap(void);
	void	attack(std::string const & target);
	void	highFivesGuys(void);

};

#endif
