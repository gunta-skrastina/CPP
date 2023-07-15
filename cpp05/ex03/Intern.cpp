/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:46:01 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 14:57:14 by gskrasti         ###   ########.fr       */
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
    int matching_index = -1;
    for (int i = 0; i < 3; i++)
    {
        if (form_name.compare(array[i]) == 0)
        {
            std::cout << "Intern creates " << form_name << " form for " << target << std::endl;
            matching_index = i;
            break;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (i != matching_index)
            delete (forms[i]);
    }
    if (matching_index != -1)
        return (forms[matching_index]);
    std::cout << "Error Intern couldn't find a " << form_name << " form for " << target << std::endl;
    return (nullptr);
}
