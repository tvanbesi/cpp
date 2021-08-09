#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);
	int			index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
	void	showContact(void) const;
	void	showContactInfo(void) const;

};

#endif
