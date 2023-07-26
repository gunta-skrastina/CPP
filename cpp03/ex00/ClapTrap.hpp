/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:46:11 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/11 14:17:17 by gskrasti         ###   ########.fr       */
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

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
