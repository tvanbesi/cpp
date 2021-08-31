#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

public:

	Dog(void);
	virtual ~Dog(void);
	Dog(Dog const &src);
	Dog				&operator=(Dog const &rhs);
	virtual void	makeSound(void) const;

};

#endif
