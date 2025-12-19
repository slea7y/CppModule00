/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:09:19 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/19 19:12:34 by majkijew         ###   ########.fr       */
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

// void formatContact(Contact contact) {
// 	if 
	
// }

void PhoneBook::displayContact() {
	
	Contact contact;
	std::string name(contact.getName()); //zrobie ze jak ktos podaje imput to bedzie musial osobno podac i imie i nazwisko
	std::string nickname(contact.getNickname());
	// formatContact(contact);
	std::cout << contact.getIndex()<< "         " << "Slawyslaw " << "Slava "  << "duzy joe " << "\n" ;
}