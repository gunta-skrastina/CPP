/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:27:21 by gskrasti          #+#    #+#             */
/*   Updated: 2023/03/28 15:52:11 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

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
    this->_name = name;
}
