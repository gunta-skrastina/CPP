/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:03:58 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/15 12:30:57 by gskrasti         ###   ########.fr       */
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
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try
    {
        Bureaucrat jane("Jane", 3);
        jane.increment();
        jane.increment();
        jane.increment();
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    try
    {
        Bureaucrat john("John", 160);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: "<< e.what() << std::endl;
    }
    return (0);
}
