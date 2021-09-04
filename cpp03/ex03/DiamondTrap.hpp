#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:

	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap	&operator=(DiamondTrap const &rhs);
	void	attack(std::string const & target);
	void	whoAmI(void) const;

private:

	std::string _name;

};

#endif
