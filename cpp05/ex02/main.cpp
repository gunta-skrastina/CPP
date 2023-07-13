/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:03:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 18:29:26 by gskrasti         ###   ########.fr       */
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
        home.beSigned(john);
        // john.executeForm(home);
        // home.execute(john);
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    try {
        Bureaucrat jane("Jane", 3);
        ShrubberyCreationForm home("home");
        home.beSigned(jane);
        home.execute(jane);
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
        try {
        Bureaucrat jane("Jane", 3);
        ShrubberyCreationForm home("home");
        home.execute(jane);
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    try {
        Bureaucrat john("John", 150);
        PresidentialPardonForm pardon("turkey");
        pardon.beSigned(john);
        pardon.execute(john);
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    try {
        Bureaucrat jane("Jane", 3);
        PresidentialPardonForm pardon("turkey");
        pardon.beSigned(jane);
        jane.executeForm(pardon);
        // jane.signForm(pardon);
        pardon.execute(jane);
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    try {
        Bureaucrat john("John", 150);
        RobotomyRequestForm robot("Jenot");
        robot.beSigned(john);
        robot.execute(john);
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    try {
        Bureaucrat jane("Jane", 3);
        RobotomyRequestForm robot("Jenot");
        robot.beSigned(jane);
        robot.execute(jane);
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    return (0);
}
