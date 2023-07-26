/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:22:38 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/11 11:37:40 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap_trap = ClapTrap("Trap");
	clap_trap.attack("Clap");
	clap_trap.takeDamage(5);
	clap_trap.beRepaired(3);
	clap_trap.attack("Clap");
	clap_trap.takeDamage(5);
	clap_trap.beRepaired(3);
	clap_trap.attack("Clap");
	clap_trap.takeDamage(5);
	clap_trap.beRepaired(3);
	clap_trap.attack("Clap");
	clap_trap.takeDamage(5);
	clap_trap.beRepaired(3);
	clap_trap.attack("Clap");
	clap_trap.takeDamage(5);
	clap_trap.beRepaired(3);
	clap_trap.attack("Clap");
	clap_trap.takeDamage(5);
	clap_trap.beRepaired(3);
	clap_trap.attack("Clap");
	clap_trap.takeDamage(10);
	clap_trap.beRepaired(3);
	
	return (0);
}
