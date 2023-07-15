/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:03:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 15:02:00 by gskrasti         ###   ########.fr       */
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
        Form *form1 = intern.makeForm("presidential pardon", "42");
        if (form1 != nullptr)
            delete form1;
        Form *form2 = intern.makeForm("robotomy request", "Bender");
        if (form2 != nullptr)
            delete form2;
        Form *form3  = intern.makeForm("shrubbery creation", "Home");
        if (form3 != nullptr)
            delete form3;
        Form *form4 = intern.makeForm("will to live", "intern");
        if (form4 != nullptr)
            delete form4;
        
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    return (0);
}
