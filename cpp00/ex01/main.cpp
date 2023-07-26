/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:50:56 by gskrasti          #+#    #+#             */
/*   Updated: 2023/03/23 17:11:10 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	std::string	in;
	PhoneBook phone_book;
	
	std::cout << "***************************************" << std::endl;
	std::cout << "*             PhoneBook               *" << std::endl;
	std::cout << "***************************************" << std::endl;
	while (42)
	{
		std::cout << "Type A to ADD, S to SEARCH, E to EXIT:" << std::endl;
		std::getline(std::cin, in);
		if (toupper(in[0]) == 'A' && in.length() == 1)
		{
			phone_book.add();
		}
		else if (toupper(in[0]) == 'S' && in.length() == 1)
		{
			phone_book.search();
		}
		else if (toupper(in[0]) == 'E' && in.length() == 1)
			return (0);
		else
		{
			std::cout << in << std::endl;
			std::cout << "Please type a valid choice" << std::endl;
		}
	}
	return (0);
}

