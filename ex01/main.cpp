/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:41:42 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/22 16:27:10 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// void exit(PhoneBook pb, Contact c)
// {
// 	int i = 0;
// 	while (i < pb.getCount())
// 	{
// 		c.~Contact();
// 		i++;
// 	}
// 	pb.~PhoneBook();
// }

void PhoneBook::search()
{
	int i = 0;
	std::cout << "  index   " << " | " <<  "first name" << " | "<< "last name " << " | " << " nickname " << "\n";
	while (i < getCount())
	{
		displayContact(_contacts[i]);
		i++;
	}
}

void fillContact(Contact &c, int i)
{
	std::string input;
	
	
	c.setIndex(i);
	std::cout << "give me ur name babes:\n";
	std::getline(std::cin, input);
	c.setName(input);
	std::cout << "last name:\n";
	std::getline(std::cin, input);
	c.setLastName(input);
	std::cout << "nickname:\n";
	std::getline(std::cin, input);
	c.setNickname(input);
	std::cout << "phone number:\n";
	std::getline(std::cin, input);
	c.setPhoneNumber(input);
	std::cout << "spill some tea ... give me ur darkest secret:\n";
	std::getline(std::cin, input);
	c.setDarkestSecret(input);
	std::cout << "thank u babes xoxo\n";	
}

void PhoneBook::addContact()
{
	if (_contactsCount > 8)
		setCount(0);
	fillContact(_contacts[_contactsCount], _contactsCount + 1);
	setCount(_contactsCount + 1);
}

// int main()
// {
// 	PhoneBook phoneBook1;
	
// 	phoneBook1.setCount(1);
// 	phoneBook1.displayContact();
// }

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	int count = 0;
	PhoneBook pb;
	Contact c;
	std::string input;
	while (1)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
		{
			// exit(pb, c);
			break ;
		}
	}
	return (0);
}
