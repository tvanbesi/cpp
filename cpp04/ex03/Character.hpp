#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {

public:

	Character(std::string name);
	virtual ~Character(void);
	Character(Character const &src);
	Character					&operator=(Character const &rhs);
	virtual std::string const	&getName(void) const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter &target);

private:

	std::string	_name;
	AMateria	*_m[4];

};

#endif
