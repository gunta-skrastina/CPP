/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:47:33 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/12 09:32:28 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->DiamondTrap::setName(name);
    this->FragTrap::setHitPoints(100);
    this->ScavTrap::setEnergyPoints(50);
    this->FragTrap::setAttackDamage(30);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamonTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name is " << this->DiamondTrap::getName() << std::endl;
    std::cout << "My ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}

void DiamondTrap::setName(std::string name)
{
    this->_name = name;
}

std::string	DiamondTrap::getName(void) const
{
    return (this->_name);
}
