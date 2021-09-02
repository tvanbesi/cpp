#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	~Cure(void);
	Cure(Cure const &src);
	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);

};

#endif
