/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:01:19 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/21 19:39:22 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
    : _max_size(N)
{
}

Span::Span(const Span & span)
    : _max_size(span._max_size)
{
    std::vector<int>numbers(span.numbers);
}

Span & Span::operator=(const Span & span)
{
    if (this != &span)
    {
        this->_max_size = span._max_size;
        std::vector<int>numbers(span.numbers);
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
    if (numbers.size() >= _max_size)
    {
        std::stringstream error_message;
        error_message << "Can't add " << num << ". Span is already full";
        throw std::runtime_error(error_message.str());
    }
    numbers.push_back(num);
}

int Span::shortestSpan()
{
    if (numbers.size() <= 1)
        throw std::runtime_error("Can't find the shortest Span, not enough elements.");
    std::sort(numbers.begin(), numbers.end());
    std::vector<int> diff;
    diff.reserve(numbers.size());
    std::adjacent_difference(numbers.begin(), numbers.end(), std::back_inserter(diff));
    diff.erase(diff.begin());
    return (*min_element(diff.begin(), diff.end()));
}

int Span::longestSpan()
{
    if (numbers.size() <= 1)
        throw std::runtime_error("Can't find the longest Span, not enough elements.");
    return (*max_element(numbers.begin(), numbers.end()) -  *min_element(numbers.begin(), numbers.end()));  
}

void Span::addNumbers(std::vector<int>& nums)
{
    unsigned int availableSpace = _max_size - numbers.size();
    if (nums.size() > availableSpace)
    {
        throw std::runtime_error("Not enough space to add all numbers.");
    }
    numbers.insert(numbers.end(), nums.begin(), nums.end());
}
