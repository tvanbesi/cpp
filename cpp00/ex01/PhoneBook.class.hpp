#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
	void	addContact(void);
	void	showPhoneBook(void) const;
	void	showContactInfo(int index) const;
	int		_getNContact(void) const;

private:

	Contact		contact[8];
	static int	_nContact;

};

#endif
