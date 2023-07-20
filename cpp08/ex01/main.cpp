/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:29:26 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/20 14:30:52 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what();
    }
    try
    {
        Span sp(10000);
        srand(time(NULL));
        for (int i = 0; i < 10000; ++i)
        {
            sp.addNumber(rand());
        }
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what();
    }
    return (0);
}
