/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:12:26 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/24 08:31:07 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char *input[])
{
    clock_t start = clock();
    convertToVec(input);
    fordJohnsonMergeSort(_vec, 0, _vec.size() -  1);
    clock_t end = clock();
    _vec_time = double(end - start) / CLOCKS_PER_SEC * 10000;
    std::cout << "After std::vector: ";
    print_array(_vec);

    start = clock();
    convertToDeq(input);
    fordJohnsonMergeSort(_deq, 0, _deq.size() - 1);
    end = clock();
    _deq_time = double(end - start) / CLOCKS_PER_SEC * 10000;
    std::cout << "After std::deq: ";
    print_array(_vec);

    print_time();
}

PmergeMe::PmergeMe(const PmergeMe & other)
    : _vec(other._vec), _vec_time(other._vec_time), _deq(other._deq), _deq_time(other._deq_time)
{
    
}

PmergeMe & PmergeMe::operator=(const PmergeMe & other)
{
    if (this != & other)
    {
        _vec = other._vec;
        _vec_time = other._vec_time;
        _deq = other._deq;
        _deq_time = other._deq_time;
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

template <typename Container>
void PmergeMe::mergeSortedSubarrays(Container& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    Container leftSubarray(n1);
    Container rightSubarray(n2);

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

template <typename Container>
void PmergeMe::fordJohnsonMergeSort(Container& arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        fordJohnsonMergeSort(arr, left, mid);
        fordJohnsonMergeSort(arr, mid + 1, right);
        mergeSortedSubarrays(arr, left, mid, right);
    }
}

bool PmergeMe::isValidInt(const std::string& str)
{
    if (str.empty())
        return (false);
    std::istringstream iss(str);
    int num;
    if (!(iss >> num))
        return false;
    return (iss.rdbuf()->in_avail() == 0) && (num > 0);
}

void PmergeMe::convertToVec(char *input[])
{
    int i = 0;
    while (input[i])
    {
        if (isValidInt(input[i]))
            _vec.push_back(atoi(input[i]));
        else
        {
            std::cout << "Invalid integer." << std::endl;
            exit(1);
        }
        i++;
    }
}

void PmergeMe::convertToDeq(char *input[])
{
    int i = 0;
    while (input[i])
    {
        if (isValidInt(input[i]))
            _deq.push_back(atoi(input[i]));
        else
        {
            std::cout << "Invalid integer." << std::endl;
            exit(1);
        }
        i++;
    }
}

template <typename Container>
void PmergeMe::print_array(Container & arr)
{
    for (unsigned int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::print_time()
{
    std::cout << std::setprecision(6) << std::fixed;
    std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << getVecTime() << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque : " << getDeqTime() << " us" << std::endl;
}
