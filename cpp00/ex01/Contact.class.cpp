#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

static void
	displayColumn(std::string s)
{
	int	pad;

	if (s.length() <= 10)
	{
		pad = 10 - s.length();
		while (pad-- > 0)
			std::cout << " ";
		std::cout << s;
	}
	else
		std::cout << s.substr(0, 9) << ".";
}

void	Contact::showContact(void) const {
	std::cout << "|         " << this->index << "|";
	displayColumn(this->firstName);
	std::cout << "|";
	displayColumn(this->lastName);
	std::cout << "|";
	displayColumn(this->nickName);
	std::cout << "|" << std::endl;
}

void	Contact::showContactInfo(void) const {
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickName << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}
