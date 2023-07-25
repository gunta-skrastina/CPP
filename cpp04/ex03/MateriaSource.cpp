/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:26:37 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 18:59:49 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource & other)
{
    for (int i = 0; i < 4; ++i)
    {
        materiaSources[i] = other.materiaSources[i];
    }
}

MateriaSource & MateriaSource::operator=(const MateriaSource & other)
{
    if (this != & other)
    {
        for (int i = 0; i < 4; ++i)
        {
            delete (materiaSources[i]);
        }
        for (int i = 0; i < 4; ++i)
        {
            materiaSources[i] = other.materiaSources[i];
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!materiaSources[i])
        {
            materiaSources[i] = materia;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materiaSources[i] != NULL && materiaSources[i]->getType().compare(type) == 0)
            return (materiaSources[i]->clone());
    }
    return (0);
}
