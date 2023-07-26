/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:52:50 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/11 14:17:07 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& clap_trap)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_hit_points = clap_trap._hit_points;
	this->_energy_points = clap_trap._energy_points;
	this->_attack_damage = clap_trap._attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap_trap)
{
	std::cout << "Copy assigment constructor called" << std::endl;
	this->_hit_points = clap_trap._hit_points;
	this->_energy_points = clap_trap._energy_points;
	this->_attack_damage = clap_trap._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " <<
			this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy, cannot attack." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage." << std::endl; 
		this->_hit_points -= amount;
		if (this->_hit_points <= 0)
		{
			std::cout << "ClapTrap " << this->_name << " has taken too much damage." << std::endl;
		}
	}
	else
	{
		std::cout << "Cannot take on an attack, already too damaged." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " is being repaired, adding " << amount << " hit points." << std::endl; 
		this->_energy_points--;
		this->_hit_points += amount;
	}
	else
	{
		std::cout << "Don't have energy points, cannot be repaired." << std::endl;
	}
}
