/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:08:17 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/03 13:19:56 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::complain(std::string level)
{
    void(Harl::*funcPtr)(void);
    
    enum Levels
    {
        debug,
        info,
        warning,
        error
    };

    Levels lvl;
    if (level.compare("debug") == 0)
        lvl = debug;
    if (level.compare("info") == 0)
        lvl = info;
    if (level.compare("warning") == 0)
        lvl = warning;
    if (level.compare("error") == 0)
        lvl = error;

    switch(lvl)
    {
        case debug:
            funcPtr = &Harl::debug;
            break;
        case info:
            funcPtr = &Harl::info;
            break;
        case warning:
            funcPtr = &Harl::warning;
            break;
        case error:
            funcPtr = &Harl::error;
            break; 
    }
    (this->*funcPtr)();
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
