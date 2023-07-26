/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:52:50 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/11 15:15:41 by gskrasti         ###   ########.fr       */
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

std::string ClapTrap::getName()
{
	return (this->_name);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

int ClapTrap::getHitPoints()
{
	return (this->_hit_points);
}

void ClapTrap::setHitPoints(int hit_points)
{
	this->_hit_points = hit_points;
}

int ClapTrap::getEnergyPoints()
{
	return (this->_energy_points);
}

void ClapTrap::setEnergyPoints(int energy_points)
{
	this->_energy_points = energy_points;
}

int ClapTrap::getAttackDamage()
{
	return (this->_attack_damage);
}

void ClapTrap::setAttackDamage(int attack_damage)
{
	this->_attack_damage = attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " <<
			this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(getEnergyPoints() - 1);
	}
	else
	{
		std::cout << "ClapTrap " << this->getName() << " is out of energy, cannot attack." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage." << std::endl; 
		this->setHitPoints(this->getHitPoints() - amount);
		if (this->getHitPoints() <= 0)
		{
			std::cout << "ClapTrap " << this->getName() << " has taken too much damage." << std::endl;
		}
	}
	else
	{
		std::cout << "Cannot take on an attack, already too damaged." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is being repaired, adding " << amount << " hit points." << std::endl; 
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		this->setHitPoints(this->getHitPoints() + amount);
	}
	else
	{
		std::cout << "Don't have energy points, cannot be repaired." << std::endl;
	}
}
