/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:27:50 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/03 13:53:26 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::filter(std::string level)
{
    enum Levels
    {
        debug,
        info,
        warning,
        error
    };

    Levels lvl;
    if (level.compare("DEBUG") == 0)
        lvl = debug;
    if (level.compare("INFO") == 0)
        lvl = info;
    if (level.compare("WARNING") == 0)
        lvl = warning;
    if (level.compare("ERROR") == 0)
        lvl = error;

    switch(lvl)
    {
        case debug:
            Harl::debug();
        case info:
            Harl::info();
        case warning:
            Harl::warning();
        case error:
            Harl::error();
            break; 
    }
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}
