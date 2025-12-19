/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:03:36 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/19 13:32:53 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::setIndex(int index) {
	_index = index;
}

void Contact::setName(const std::string &name) {
	_name = name;
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