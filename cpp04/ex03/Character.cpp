/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:18:31 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/25 19:00:55 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
    : name(name) {}

Character::Character(const Character & other)
    : name(other.name)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.inventory[i] != NULL)
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

Character & Character::operator=(const Character & other)
{
    if (this != & other)
    {
        name = other.name;
        for (int i = 0; i < 4; ++i)
        {
            delete (inventory[i]);
        }
        for (int i = 0; i < 4; ++i)
        {
            if (other.inventory[i] != NULL)
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character() {}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        inventory[idx] = NULL;   
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}
