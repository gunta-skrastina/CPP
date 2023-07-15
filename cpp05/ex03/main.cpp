/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:03:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 12:42:16 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try 
    {
        Intern intern;
        intern.makeForm("presidential pardon", "42");
        intern.makeForm("robotomy request", "Bender");
        intern.makeForm("shrubbery creation", "Home");
        intern.makeForm("will to live", "intern");
        
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    return (0);
}
