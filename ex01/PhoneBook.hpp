/* ************************************************************************** */
/*				                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:20:08 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/19 12:02:42 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contact {
	private:
		int 		_index;
		std::string	_name;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
	//rule of 3
		Contact();
		Contact(const Contact &other);
		Contact &operator=(const Contact &other);
		~Contact();

		// setters
		void setIndex(int _index);
		void setName(const std::string &_name);
		void setNickname(const std::string &_nickname);
		void setPhoneNumber(const std::string &_phoneNumber);
		void setDarkestSecret(const std::string &_secret);

		// getters
		int getIndex() const;
		const std::string &getName() const;
		const std::string &getNickname() const;
		const std::string &getPhoneNumber() const;
		const std::string &getDarkestSecret() const;
};


// class PhoneBook {
// 	Contact[8];
// };

#endif