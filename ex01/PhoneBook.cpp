/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:09:19 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/22 16:27:37 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactsCount(0), _contactIndex(0) {}

PhoneBook::~PhoneBook() {}

// set
void PhoneBook::setCount(int count) {
	_contactsCount = count;
}

void PhoneBook::setIndex(int index) {
	_contactIndex = index;
}

// get
int PhoneBook::getCount() const {
	return (_contactsCount);	
}

int PhoneBook::getIndex() const {
	return (_contactIndex);	
}

//phone book functions


// void addContact(){
// 	PhoneBook contact;
		
// }

void formatString(std::string& s) {
	int i = 10;

	if (s.length() < 10)
		s.resize(10, ' ');
	else if (s.length() > 10)
	{
		s.resize(9, ' ');
		s += '.';
	}
}

void PhoneBook::displayContact(const Contact& contact) const {
	std::string name(contact.getName());
	std::string lastname(contact.getLastName());
	std::string nickname(contact.getNickname());
	
	formatString(name);
	formatString(lastname);
	formatString(nickname);
	std::cout << contact.getIndex() << "         " << " | "
				<< name << " | "
				<< lastname << " | "
				<< nickname << "\n" ;
}