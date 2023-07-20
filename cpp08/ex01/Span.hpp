/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:01:15 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/20 14:23:34 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <limits>
#include <numeric>

class Span
{
private:
    unsigned int _max_size;
    std::vector<int> numbers;
public:
    Span(unsigned int N);
    Span(const Span & span);
    Span & operator=(const Span & span);
    ~Span();

    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
};

#endif
