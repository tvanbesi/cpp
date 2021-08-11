#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);
	std::string	getName(void) const;
	void		setName(std::string name);
	void		setWeapon(Weapon &weapon);
	void		attack(void);

private:

	std::string	_name;
	Weapon		*_weapon;

};

#endif
