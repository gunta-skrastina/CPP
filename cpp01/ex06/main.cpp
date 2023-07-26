/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:28:36 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/03 13:49:24 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "No complaints here" << std::endl;
        return (0);
    }
    else if (argc > 2)
    {
        std::cout << "Probably complaining about insignificant problems" << std::endl;
        return (0);
    }
    
    Harl harl;
    harl.filter(argv[1]);
    
}
