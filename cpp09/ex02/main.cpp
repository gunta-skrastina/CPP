/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:14:07 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/23 20:05:15 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.cpp"
#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> vec(arr, arr + n);
    PmergeMe pm(vec);
    const std::vector<int>& sortedVector = pm.getSortedVec();

    std::cout << "After: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << sortedVector[i] << " ";
    }
    std::cout << std::endl;

    std::cout << std::setprecision(6) << std::fixed;
    std::cout << "Time to process a range of " << n << " elements with std::vector : " << pm.getVecTime() << " us" << std::endl;
    std::cout << "Time to process a range of " << n << " elements with std::vector : " << pm.getDeqTime() << " us" << std::endl;
    return (0);
}

