#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

public:

	Dog(void);
	virtual ~Dog(void);
	Dog(Dog const &src);
	Dog				&operator=(Dog const &rhs);
	Brain			*getBrain(void) const;
	virtual void	makeSound(void) const;

private:

	Brain	*_brain;

};

#endif
