/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:03:54 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 18:54:30 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
    : AMateria("ice") {}

Ice::Ice(const Ice & other)
    : AMateria(other.type) {}

Ice & Ice::operator=(const Ice & other)
{
    if (this != & other)
        type = other.type;
    return (*this);
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
