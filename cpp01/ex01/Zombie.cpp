/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:00:05 by gskrasti          #+#    #+#             */
/*   Updated: 2023/03/28 16:14:30 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << " has been destroyed." << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() const
{
    return (this->_name);
}
    
void Zombie::setName(std::string name)
{
    std::cout << name << " has been created" << std::endl;
    this->_name = name;
}
