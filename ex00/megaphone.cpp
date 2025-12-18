/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:51:02 by maja              #+#    #+#             */
/*   Updated: 2025/12/18 12:03:34 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//change headerlater idk why its like that
#include <iostream> 

int main(int ac, char **av){
	int i = 1;
	int j = 0;
	
	if (ac == 1)
		std::cout << "* LOUD UNBERABLE FEEDBACK NOISE *\n";
	else {
		while (i < ac)
		{
			j = 0;
			std::string s(av[i]);
			while (s[j])
			{
				s[j] = std::toupper(static_cast<unsigned char>(s[j]));
				j++;
			}
			std::cout << s;
			if (i != ac - 1)
				std::cout << " ";
			i++;
		}
	}
	std::cout << "\n";
	return 0;
}
