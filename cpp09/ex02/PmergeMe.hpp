/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:12:01 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/23 20:15:26 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
private:
    std::vector<int>_vec;
    double _vec_time;
    std::deque<int>_deq;
    double _deq_time;
    
    void mergeSortedSubarrays(std::vector<int>& arr, int left, int mid, int right);
    void mergeSortedSubarrays(std::deque<int>& arr, int left, int mid, int right);
    void fordJohnsonMergeSort(std::vector<int>& arr, int left, int right);
    void fordJohnsonMergeSort(std::deque<int>& arr, int left, int right);
public:
    PmergeMe(std::vector<int> array);
    PmergeMe(const PmergeMe & other);
    PmergeMe & operator=(const PmergeMe & other);
    ~PmergeMe();
    
    const std::vector<int>& getSortedVec() const;
    double getVecTime() const;
    const std::deque<int>& getSortedDeq() const;
    double getDeqTime() const;
};

#endif
