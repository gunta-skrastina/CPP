/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:14:07 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/23 20:52:10 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.cpp"
#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>

bool isValid(const std::string& str)
{
    if (str.empty())
        return (false);
    std::istringstream iss(str);
    int num;
    if (!(iss >> num))
        return false;
    return (iss.rdbuf()->in_avail() == 0) && (num > 0);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Wrong argument count." << std::endl;
        return (1);
    }
    std::vector<int>nums;
    for (int i = 1; i < argc; ++i)
    {
        if (isValid(argv[i]))
            nums.push_back(atoi(argv[i]));
        else
        {
            std::cout << "Invalid integer." << std::endl;
            return (1);
        }
    }
    
    std::cout << "Before: ";
    for (unsigned int i = 0; i < nums.size(); ++i)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    PmergeMe pm(nums);
    const std::vector<int>& sortedVec = pm.getSortedVec();

    std::cout << "After std::vector: ";
    for (unsigned int i = 0; i < sortedVec.size(); ++i)
    {
        std::cout << sortedVec[i] << " ";
    }
    std::cout << std::endl;

    const std::deque<int>& sortedDeq = pm.getSortedDeq();
    std::cout << "After std::deque: ";
    for (unsigned int i = 0; i < sortedDeq.size(); ++i)
    {
        std::cout << sortedDeq[i] << " ";
    }
    std::cout << std::endl;

    std::cout << std::setprecision(6) << std::fixed;
    std::cout << "Time to process a range of " << nums.size() << " elements with std::vector : " << pm.getVecTime() << " us" << std::endl;
    std::cout << "Time to process a range of " << nums.size() << " elements with std::vector : " << pm.getDeqTime() << " us" << std::endl;
    return (0);
}

