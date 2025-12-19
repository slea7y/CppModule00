/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:41:42 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/19 23:02:30 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void exit(PhoneBook pb, Contact c)
{
	int i = 0;
	while (i < pb.getCount())
	{
		c.~Contact();
		i++;
	}
	pb.~PhoneBook();
}

void search(PhoneBook c)
{
	int i = 0;
	std::cout << "  index   " << " | " <<  "first name" << " | "<< "last name " << " | " << " nickname " << "\n";
	while (i < c.getCount())
	{
		c.displayContact();
		i++;
	}
}

void add(Contact c)
{
	std::string input;
	if (c.getIndex() > 8)
		c.setIndex(0);
	c.setIndex(c.getIndex() + 1);
	std::cout << "give me ur name babes:\n";
	std::getline(std::cin, input);
	c.setName(input);
	std::cout << "last name:\n";
	c.setLastName(input);
	std::getline(std::cin, input);
	std::cout << "nickname:\n";
	std::getline(std::cin, input);
	c.setNickname(input);
	std::cout << "phone number:\n";
	c.setPhoneNumber(input);
	std::getline(std::cin, input);
	std::cout << "spill some tea ... give me ur darkest secret:\n";
	std::getline(std::cin, input);
	c.setName(input);
	std::cout << "thank u babes xoxo\n";
}

// int main()
// {
// 	PhoneBook phoneBook1;
	
// 	phoneBook1.setCount(1);
// 	phoneBook1.displayContact();
// }

int main(int ac, char **av)
{
	if (ac == 1)
		return (1);
	std::string s(av[1]);
	PhoneBook pb;
	Contact c;
	if (s == "ADD")
		add(c);
	// else if (s == "SEARCH")
		std::cout 
	else if (s == "SEARCH")
		search(pb);
	else if (s == "EXIT")
		exit(pb, c);
	else
		std::cout << "ur imput is being ignored\n";
	return (0);
}