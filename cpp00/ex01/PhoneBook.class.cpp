#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
}

PhoneBook::~PhoneBook(void) {
}

void	PhoneBook::addContact(void) {
	if (PhoneBook::_nContact == 8)
	{
		std::cout << "The phonebook is full" << std::endl;
		return ;
	}
	this->contact[PhoneBook::_nContact].index = PhoneBook::_nContact;
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->contact[PhoneBook::_nContact].firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->contact[PhoneBook::_nContact].lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->contact[PhoneBook::_nContact].nickName);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->contact[PhoneBook::_nContact].phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->contact[PhoneBook::_nContact].darkestSecret);
	PhoneBook::_nContact++;
}

void	PhoneBook::showPhoneBook(void) const {
	for (int i = 0; i < PhoneBook::_nContact; i++)
		this->contact[i].showContact();
}

void	PhoneBook::showContactInfo(int index) const {
	this->contact[index].showContactInfo();
}

int		PhoneBook::_getNContact(void) const {
	return (PhoneBook::_nContact);
}

int	PhoneBook::_nContact = 0;
