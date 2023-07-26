/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:46:11 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/11 13:42:28 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hit_points;
	int _energy_points;
	int _attack_damage;
public:
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap& clap_trap);
	ClapTrap& operator=(const ClapTrap& clap_trap);
	~ClapTrap();

	std::string getName();
	void setName(std::string name);
	int getHitPoints();
	void setHitPoints(int hit_points);
	int getEnergyPoints();
	void setEnergyPoints(int energy_points);
	int getAttackDamage();
	void setAttackDamage(int attack_damage);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
