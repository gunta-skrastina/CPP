/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:14:07 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/24 08:25:49 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Wrong argument count." << std::endl;
        return (1);
    }
    std::cout << "Before: ";
    for (int i = 1; i < argc; i++)
    {
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;
    PmergeMe pm(argv + 1);
    return (0);
}
