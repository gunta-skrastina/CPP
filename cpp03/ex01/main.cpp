/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:22:38 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/11 13:56:55 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav_trap = ScavTrap("Trap");
	scav_trap.attack("Scav");
	scav_trap.takeDamage(20);
	scav_trap.beRepaired(5);
	scav_trap.guardGate();
	scav_trap.attack("Scav");
	scav_trap.takeDamage(26);
	scav_trap.beRepaired(10);
	scav_trap.guardGate();
	scav_trap.attack("Scav");
	scav_trap.takeDamage(30);
	scav_trap.beRepaired(1);
	scav_trap.guardGate();
	scav_trap.attack("Scav");
	scav_trap.takeDamage(1);
	scav_trap.beRepaired(1);
	scav_trap.guardGate();
	scav_trap.attack("Scav");
	scav_trap.takeDamage(42);
	scav_trap.beRepaired(24);
	scav_trap.attack("Scav");
	scav_trap.takeDamage(5);
	scav_trap.beRepaired(3);
	scav_trap.attack("Scav");
	scav_trap.takeDamage(10);
	scav_trap.beRepaired(3);
	scav_trap.guardGate();
	
	return (0);
}
