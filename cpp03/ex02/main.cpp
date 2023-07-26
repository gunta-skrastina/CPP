/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:22:38 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/11 14:34:36 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag_trap = FragTrap("Trap");
	frag_trap.attack("Frag");
	frag_trap.takeDamage(20);
	frag_trap.beRepaired(5);
	frag_trap.highFivesGuys();
	frag_trap.attack("Frag");
	frag_trap.takeDamage(26);
	frag_trap.beRepaired(10);
	frag_trap.highFivesGuys();
	frag_trap.attack("Frag");
	frag_trap.takeDamage(30);
	frag_trap.beRepaired(1);
	frag_trap.highFivesGuys();
	frag_trap.attack("Frag");
	frag_trap.takeDamage(1);
	frag_trap.beRepaired(1);
	frag_trap.highFivesGuys();
	frag_trap.attack("Frag");
	frag_trap.takeDamage(42);
	frag_trap.beRepaired(24);
	frag_trap.attack("Frag");
	frag_trap.takeDamage(5);
	frag_trap.beRepaired(3);
	frag_trap.attack("Frag");
	frag_trap.takeDamage(10);
	frag_trap.beRepaired(3);
	frag_trap.highFivesGuys();
	
	return (0);
}
