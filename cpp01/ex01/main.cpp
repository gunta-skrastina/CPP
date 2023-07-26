/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:03:08 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/08 12:04:20 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int zombie_count = 10;

    Zombie *zombie = zombieHorde(zombie_count, "zooombie");
    for (int i = 0; i < zombie_count; i++)
    {
        zombie[i].announce();
    }
    delete[] zombie;
}
