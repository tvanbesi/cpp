#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class AMateria {

public:

	AMateria(std::string const &type);
	~AMateria(void);
	AMateria(AMateria const &src);
	std::string	const 	&getType(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);

protected:

	std::string	_type;

};

#endif
