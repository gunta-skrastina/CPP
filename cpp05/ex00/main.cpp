/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:03:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/13 17:56:46 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat julia("Julia", 149);
        julia.decrement();
        julia.decrement();
        julia.decrement();
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    try
    {
        Bureaucrat jane("Jane", 3);
        jane.increment();
        jane.increment();
        jane.increment();
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    try
    {
        Bureaucrat john("John", 160);
    }
    catch(const char* error)
    {
        std::cout << "Exception: "<< error << std::endl;
    }
    return (0);
}
