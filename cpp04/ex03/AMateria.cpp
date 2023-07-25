/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:08:42 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 18:54:46 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
    : type(type) {}

AMateria::AMateria(const AMateria & other)
    : type(other.type) {}

AMateria & AMateria::operator=(const AMateria & other)
{
    if (this != & other)
        type = other.type;
    return (*this);
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter & target)
{
    std::cout << "Using AMateria on " << target.getName() << std::endl;
}
