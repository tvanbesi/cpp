#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource(void);
	virtual ~MateriaSource();
	virtual void		learnMateria(AMateria *);
	virtual AMateria	*createMateria(std::string const &type);

private:

	AMateria	*_m[4];

};

#endif
