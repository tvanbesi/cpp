#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

public:
	
	Zombie(void);
	~Zombie(void);
	void		setName(std::string name);
	std::string	getName(void) const;
	void		announce(void);

private:

	std::string	_name;

};

#endif
