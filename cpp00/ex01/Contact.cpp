/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:08:00 by gskrasti          #+#    #+#             */
/*   Updated: 2023/03/22 15:21:22 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	removeSpaces(std::string str);

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName() const
{
	return (this->_first_name);
}

void	Contact::setFirstName(std::string first_name)
{
	first_name = removeSpaces(first_name);
	this->_first_name = first_name;
}

std::string	Contact::getLastName() const
{
	return (this->_last_name);
}

void	Contact::setLastName(std::string last_name)
{
	last_name = removeSpaces(last_name);
	this->_last_name = last_name;
}

std::string	Contact::getNickname() const
{
	return (this->_nickname);
}

void	Contact::setNickname(std::string nickname)
{
	nickname = removeSpaces(nickname);
	this->_nickname = nickname;
}

std::string	Contact::getPhoneNumber() const
{
	return (this->_phone_number);
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	phone_number = removeSpaces(phone_number);
	this->_phone_number = phone_number;
}

std::string	Contact::getDarkestSecret() const
{
	return (this->_darkest_secret);
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	darkest_secret = removeSpaces(darkest_secret);
	this->_darkest_secret = darkest_secret;
}

std::string	removeSpaces(std::string str)
{
	str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
	return (str);
}
