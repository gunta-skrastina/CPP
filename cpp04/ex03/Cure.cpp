/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:11:17 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 18:55:24 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure") {}

Cure::Cure(const Cure & other)
    : AMateria(other.type) {}

Cure & Cure::operator=(const Cure & other)
{
    if (this != & other)
        type = other.type;
    return (*this);
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter & target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
