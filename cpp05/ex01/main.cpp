/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:03:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 14:11:46 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Form form1("form 1", 1000, 900);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try
    {
        Form form2("form 2", -30, -45);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try {
        Form form3("form 3", 40, 30);
        Bureaucrat jane("Jane", 3);
        jane.signForm(&form3);
        form3.beSigned(jane);
        jane.signForm(&form3);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try {
        Form form4("form 4", 40, 30);
        Bureaucrat john("John", 150);
        john.signForm(&form4);
        form4.beSigned(john);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    return (0);
}
