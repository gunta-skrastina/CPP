/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:03:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 14:14:31 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try {
        Bureaucrat john("John", 10);
        ShrubberyCreationForm home("home");
        john.executeForm(home);
        home.beSigned(john);
        home.execute(john);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try {
        Bureaucrat jane("Jane", 3);
        ShrubberyCreationForm park("park");
        park.beSigned(jane);
        park.execute(jane);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try {
        Bureaucrat jane("Jane", 3);
        ShrubberyCreationForm lakeside("lakeside");
        lakeside.execute(jane);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try {
        Bureaucrat john("John", 150);
        PresidentialPardonForm pardon("turkey");
        pardon.beSigned(john);
        pardon.execute(john);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try {
        Bureaucrat jane("Jane", 3);
        PresidentialPardonForm pardon("whale");
        pardon.beSigned(jane);
        jane.executeForm(pardon);
        jane.signForm(&pardon);
        pardon.execute(jane);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try {
        Bureaucrat john("John", 150);
        RobotomyRequestForm robot("Jenot");
        robot.beSigned(john);
        robot.execute(john);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try {
        Bureaucrat jane("Jane", 3);
        RobotomyRequestForm robot("Bender");
        robot.beSigned(jane);
        robot.execute(jane);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    return (0);
}
