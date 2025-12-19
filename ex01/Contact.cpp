/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:03:36 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/19 22:43:54 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//setter
void Contact::setIndex(int index) {
	_index = index;
}

void Contact::setName(const std::string &name) {
	_name = name;
}

void Contact::setLastName(const std::string &lastName) {
	_lastName = lastName;
}
	
void Contact::setNickname(const std::string &nickname) {
	_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &getPhoneNumber) {
	_phoneNumber = getPhoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	_darkestSecret = darkestSecret;	
}

//getter
int Contact::getIndex() const {
	return (_index);
}

const std::string &Contact::getName() const {
	return (_name);
}

const std::string &Contact::getLastName() const {
	return (_lastName);
}

const std::string &Contact::getNickname() const{
	return (_nickname);
}

const std::string &Contact::getPhoneNumber() const {
	return (_phoneNumber);
}

const std::string &Contact::getDarkestSecret() const {
    return (_darkestSecret);
}

//default constructor
Contact::Contact() : _index(0), _name(""), _lastName(""), _nickname(""), _phoneNumber(""),
_darkestSecret() {}

//copy constructor
Contact::Contact(const Contact &other)
{
	_index = other._index;
	_lastName = other._lastName;
	_name = other._name;
	_nickname = other._nickname;
	_phoneNumber = other._phoneNumber;
	_darkestSecret = other._darkestSecret;
}

Contact	&Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		_index = other._index;	
		_name = other._name;
		_lastName = other._lastName;
		_nickname = other._nickname;
		_phoneNumber = other._phoneNumber;
		_darkestSecret = other._darkestSecret;	
	}
	return *this;
}

//destructor
Contact::~Contact() {}
