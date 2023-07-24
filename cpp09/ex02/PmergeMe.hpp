/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:12:01 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/24 08:31:21 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

# include <ctime>
# include <vector>
# include <deque>
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>

class PmergeMe
{
private:
    std::vector<int>_vec;
    double _vec_time;
    std::deque<int>_deq;
    double _deq_time;

    template <typename Container>
    void mergeSortedSubarrays(Container& arr, int left, int mid, int right);
    template <typename Container>
    void fordJohnsonMergeSort(Container& arr, int left, int right);
    bool isValidInt(const std::string& str);
    void convertToVec(char *input[]);
    void convertToDeq(char *input[]);
    template <typename Container>
    void print_array(Container & arr);
    void print_time();
public:
    PmergeMe(char *input[]);
    PmergeMe(const PmergeMe & other);
    PmergeMe & operator=(const PmergeMe & other);
    ~PmergeMe();

    const std::vector<int>& getSortedVec() const;
    double getVecTime() const;
    const std::deque<int>& getSortedDeq() const;
    double getDeqTime() const;
};

#endif
