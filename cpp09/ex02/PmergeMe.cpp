/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:12:26 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/23 20:31:10 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> array)
    : _vec(array), _deq(array.begin(), array.end())
{
    clock_t start = clock();
    fordJohnsonMergeSort(_vec, 0, _vec.size() -  1);
    clock_t end = clock();
    _vec_time = double (end - start) / CLOCKS_PER_SEC;

    start = clock();
    fordJohnsonMergeSort(_deq, 0, _deq.size() - 1);
    end = clock();
    _deq_time = double (end - start) / CLOCKS_PER_SEC;
}

PmergeMe::PmergeMe(const PmergeMe & other)
    : _vec(other._vec), _deq(other._deq)
{
}

PmergeMe & PmergeMe::operator=(const PmergeMe & other)
{
    if (this != & other)
    {
        this->_vec = other._vec;
        this->_deq = other._deq;
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
    
}

const std::vector<int>& PmergeMe::getSortedVec() const
{
    return (_vec);
}

double PmergeMe::getVecTime() const
{
    return (_vec_time);
}

const std::deque<int>& PmergeMe::getSortedDeq() const
{
    return (_deq);
}

double PmergeMe::getDeqTime() const
{
    return (_deq_time);
}

void PmergeMe::mergeSortedSubarrays(std::vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int>leftSubarray(n1);
    std::vector<int>rightSubarray(n2);

    for (int i = 0; i < n1; ++i)
        leftSubarray[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        rightSubarray[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (leftSubarray[i] <= rightSubarray[j])
        {
            arr[k] = leftSubarray[i];
            ++i;
        }
        else
        {
            arr[k] = rightSubarray[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
    {
        arr[k] = leftSubarray[i];
        ++i;
        ++k;
    }

    while (j < n2)
    {
        arr[k] = rightSubarray[j];
        ++j;
        ++k;
    }
}

void PmergeMe::mergeSortedSubarrays(std::deque<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::deque<int>leftSubarray(n1);
    std::deque<int>rightSubarray(n2);

    for (int i = 0; i < n1; ++i)
        leftSubarray[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        rightSubarray[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (leftSubarray[i] <= rightSubarray[j])
        {
            arr[k] = leftSubarray[i];
            ++i;
        }
        else
        {
            arr[k] = rightSubarray[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
    {
        arr[k] = leftSubarray[i];
        ++i;
        ++k;
    }

    while (j < n2)
    {
        arr[k] = rightSubarray[j];
        ++j;
        ++k;
    }
}

void PmergeMe::fordJohnsonMergeSort(std::vector<int>& arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        fordJohnsonMergeSort(arr, left, mid);
        fordJohnsonMergeSort(arr, mid + 1, right);
        mergeSortedSubarrays(arr, left, mid, right);
    }
}

void PmergeMe::fordJohnsonMergeSort(std::deque<int>& arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        fordJohnsonMergeSort(arr, left, mid);
        fordJohnsonMergeSort(arr, mid + 1, right);
        mergeSortedSubarrays(arr, left, mid, right);
    }
}
