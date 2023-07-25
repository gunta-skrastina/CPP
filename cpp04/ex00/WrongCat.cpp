/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:17:10 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 19:47:34 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    type = other.type;
}

WrongCat & WrongCat::operator=(const WrongCat & other)
{
    std::cout << "WrongCat copy assignement operator called" << std::endl;
    if (this != & other)
        type = other.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << this->type << " wrongly meowing" << std::endl;
}
