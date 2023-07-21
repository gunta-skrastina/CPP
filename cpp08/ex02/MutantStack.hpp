/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:41:05 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/21 10:04:49 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack()
        : std::stack<T>()
    {
    }
    
    MutantStack(const std::stack<T> & other)
        : std::stack<T>::c(other.c)
    {
    }
    
    MutantStack &operator=(const std::stack<T> & other)
    {
        if (this != &other)
        {
            std::stack<T>::c = other.c;
            if (!other.empty())
                std::stack<T>::push(other.top());
        }
        return (*this);
    }

    ~MutantStack()
    {
    }
    
    class iterator : public std::iterator<std::bidirectional_iterator_tag, T>
    {
    private:
        typename std::stack<T>::container_type::iterator it;
    public:
        iterator(typename std::stack<T>::container_type::iterator iter)
            : it(iter)
        {    
        }

        iterator& operator++() // Prefix increment
        {
            ++it;
            return *this;
        }

        iterator operator++(int) // Postfix increment
        {
            iterator temp = *this;
            ++it;
            return temp;
        }

        iterator& operator--() // Prefix decrement
        {
            --it;
            return *this;
        }

        iterator operator--(int) // Postfix decrement
        {
            iterator temp = *this;
            --it;
            return temp;
        }

        bool operator==(const iterator& other) const
        {
            return it == other.it;
        }

        bool operator!=(const iterator& other) const
        {
            return it != other.it;
        }

        T& operator*()
        {
            return *it;
        }
    };

    iterator begin()
    {
        return iterator(std::stack<T>::c.begin());
    }

    iterator end()
    {
        return iterator(std::stack<T>::c.end());
    }
};

#endif
