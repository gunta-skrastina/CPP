/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:55:21 by gskrasti          #+#    #+#             */
/*   Updated: 2023/03/28 13:08:02 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

std::string display_str(const std::string);

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Closing the phone book. All contacts have been destroyed." << std::endl;
}

int	PhoneBook::getIndex()
{
	return (_index);
}

void PhoneBook::add()
{
	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	PhoneBook::_contacts[PhoneBook::_index].setFirstName("");
	PhoneBook::_contacts[PhoneBook::_index].setLastName("");
	PhoneBook::_contacts[PhoneBook::_index].setNickname("");
	PhoneBook::_contacts[PhoneBook::_index].setPhoneNumber("");
	PhoneBook::_contacts[PhoneBook::_index].setDarkestSecret("");

	while (PhoneBook::_contacts[PhoneBook::_index].getFirstName() == "")
	{
		std::cout << "Please enter first name:" << std::endl;
		std::getline(std::cin, first_name);
		PhoneBook::_contacts[PhoneBook::_index].setFirstName(first_name);
	}
	while (PhoneBook::_contacts[PhoneBook::_index].getLastName() == "")
	{
		std::cout << "Please enter last name:" << std::endl;
		std::getline(std::cin, last_name);
		PhoneBook::_contacts[PhoneBook::_index].setLastName(last_name);
	}
	while (PhoneBook::_contacts[PhoneBook::_index].getNickname() == "")
	{
		std::cout << "Please enter nickname:" << std::endl;
		std::getline(std::cin, nickname);
		PhoneBook::_contacts[PhoneBook::_index].setNickname(nickname);
	}
	while (PhoneBook::_contacts[PhoneBook::_index].getPhoneNumber() == "")
	{
		std::cout << "Please enter phone number:" << std::endl;
		std::getline(std::cin, phone_number);
		PhoneBook::_contacts[PhoneBook::_index].setPhoneNumber(phone_number);
	}
	while (PhoneBook::_contacts[PhoneBook::_index].getDarkestSecret() == "")
	{
		std::cout << "Please enter the darkest secret:" << std::endl;
		std::getline(std::cin, darkest_secret);
		PhoneBook::_contacts[PhoneBook::_index].setDarkestSecret(darkest_secret);
	}
	if (_index == 7)
		PhoneBook::_index = 0;
	else
		PhoneBook::_index++;
}

void PhoneBook::search()
{
	int	index;
	
	std::cout << "*********************************************" << std::endl;
	std::cout << "*                Contact list               *" << std::endl;
	std::cout << "*********************************************" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   index  |first name| last name| phone no.|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << display_str(PhoneBook::_contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << display_str(PhoneBook::_contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << display_str(PhoneBook::_contacts[i].getPhoneNumber());
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Select and index to display contact:" << std::endl;
	index = -1;
	while (index < 0 || index > 7)
	{
		std::cin >> index;
		while (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Please enter a valid index:" << std::endl;
			std::cin >> index;
		}
		if (index >= 0 && index < 8 && PhoneBook::_contacts[index].getFirstName() != "")
		{
			std::cout << "First name: " << PhoneBook::_contacts[index].getFirstName() << std::endl;
			std::cout << "Last name: " << PhoneBook::_contacts[index].getLastName() << std::endl;
			std::cout << "Phone numeber: " << PhoneBook::_contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << PhoneBook::_contacts[index].getDarkestSecret() << std::endl;
		}
		else if (index >= 0 && index < 8 && PhoneBook::_contacts[index].getFirstName() == "")
			std::cout << "No contact at this index." << std::endl;
		else
			std::cout << "Index out of scope. Please select a valid index:" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
}

std::string display_str(const std::string str)
{
	std::string s;
	
	if (str.length() > 10)
		s = str.substr(0, 9) + ".";
	else
		s = str;
	return (s);
}
