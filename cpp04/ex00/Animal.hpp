#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {

public:

	Animal(void);
	virtual ~Animal(void);
	Animal(Animal const &src);
	Animal			&operator=(Animal const &rhs);
	std::string		getType(void) const;
	virtual void	makeSound(void) const;

protected:

	std::string	_type;

};

#endif
