/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:41:42 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/19 13:30:33 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() : _index(0), _name(""), _nickname(""), _phoneNumber(""),
_darkestSecret() {}

Contact::Contact(const Contact &other)
{
	_index = other._index;	
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
		_nickname = other._nickname;
		_phoneNumber = other._phoneNumber;
		_darkestSecret = other._darkestSecret;	
	}
	return *this;
}

Contact::~Contact() {}

// void exit()
// {
	
// }

// void search()
// {
	
// }

// void add()
// {
// 	Contact.setName("");
// }

// int main(int ac, char **av)
int main()
{
	Contact yeSlay;
	Contact yeSlay2;
	yeSlay.setIndex(1);
	yeSlay2 = yeSlay;
	yeSlay.setIndex(6);
	
	std::cout << yeSlay.getIndex();
}
// {
	// if (ac == 1)
	// 	return (1);
	// std::string s(av[1]);
	// if (s == "ADD")
	// 	add();
	// else if (s == "SEARCH")
	// 	search();
	// else if (s == "EXIT")
	// 	exit();
	// else
	// 	std::cout << "ur imput is being ignored\n";
	// return (0);
// }