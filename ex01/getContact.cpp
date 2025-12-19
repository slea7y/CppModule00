/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:07:05 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/19 13:27:49 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int Contact::getIndex() const {
	return (_index);
}

const std::string &Contact::getName() const {
	return (_name);
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
