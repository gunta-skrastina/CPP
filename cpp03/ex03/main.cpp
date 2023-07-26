/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:22:38 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/12 09:30:43 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond_trap = DiamondTrap("Trap");
	diamond_trap.whoAmI();
	diamond_trap.attack("Diamond");
	diamond_trap.takeDamage(50);
	diamond_trap.beRepaired(5);
	diamond_trap.attack("Diamond");
	diamond_trap.takeDamage(32);
	diamond_trap.beRepaired(10);
	diamond_trap.attack("Diamond");
	diamond_trap.takeDamage(35);
	diamond_trap.beRepaired(1);
	diamond_trap.attack("Diamond");
	diamond_trap.takeDamage(10);
	diamond_trap.beRepaired(1);
	diamond_trap.attack("Diamond");
	diamond_trap.takeDamage(42);
	diamond_trap.beRepaired(24);
	diamond_trap.attack("Diamond");
	diamond_trap.takeDamage(5);
	diamond_trap.beRepaired(3);
	diamond_trap.attack("Diamond");
	diamond_trap.takeDamage(10);
	diamond_trap.beRepaired(3);
	diamond_trap.whoAmI();
	return (0);
}
