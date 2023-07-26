/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:20:36 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/03 13:21:12 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;
    for (int i = 0; i < 10; i++)
    {
        harl.complain("debug");
        harl.complain("info");
        harl.complain("warning");
        harl.complain("error");
    }
    return (0);
}
