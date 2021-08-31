#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {

public:

	ClapTrap(std::string name);
	~ClapTrap(void);
	unsigned int	getHitPoint(void);
	void			setAttackDamage(unsigned int value);
	unsigned int	getAttackDamage(void);
	std::string		getName(void);
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
