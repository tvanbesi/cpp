#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {

public:

	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(ClapTrap const &src);
	ClapTrap		&operator=(ClapTrap const &rhs);
	void			setHitPoint(unsigned int value);
	unsigned int	getHitPoint(void) const;
	void			setEnergyPoint(unsigned int value);
	unsigned int	getEnergyPoint(void) const;
	void			setAttackDamage(unsigned int value);
	unsigned int	getAttackDamage(void) const;
	std::string		getName(void) const;

	void			attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

private:

	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;

};

#endif
