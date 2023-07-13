/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:46:01 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 15:38:37 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& /*intern*/)
{
    
}

Intern& Intern::operator=(const Intern& /*intern*/)
{
    return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
    std::string array[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    Form *forms[3] = {
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target),
        new ShrubberyCreationForm(target)
    };
    for (int i = 0; i < 3; i++)
    {
        if (form_name.compare(array[i]) == 0)
        {
            std::cout << "Intern creates " << form_name << " form for " << target << std::endl;
            return (forms[i]);
        }
    }
    std::cout << "ERROR: Intern couldn't find a " << form_name << " form for " << target << std::endl;
    return (nullptr);
}
