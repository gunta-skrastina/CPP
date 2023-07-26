/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:47:28 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/26 10:27:13 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

class Contact
{
private:
	std::string _first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	Contact();
	~Contact();
	
	std::string	getFirstName() const;
	void	setFirstName(std::string first_name);
	std::string	getLastName() const;
	void	setLastName(std::string last_name);
	std::string	getNickname() const;
	void	setNickname(std::string nickname);
	std::string	getPhoneNumber() const;
	void	setPhoneNumber(std::string phone_number);
	std::string	getDarkestSecret() const;
	void	setDarkestSecret(std::string darkest_secret);
};

#endif
