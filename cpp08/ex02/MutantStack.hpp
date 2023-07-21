/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:48:55 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/21 18:22:10 by gskrasti         ###   ########.fr       */
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

    MutantStack(const MutantStack & other)
        : std::stack<T>(other)
    {
    }

    MutantStack & operator=(const MutantStack & other)
    {
        if (this != & other)
            std::stack<T>::operator=(other);
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
        iterator(typename std::stack<T>::container_type::iterator it)
            : it(it)
        {
        }
        
        iterator(const iterator & other)
            : it (other.it)
        {
        }
        
        iterator & operator=(const iterator & other)
        {
            if (this != other)
                it = other.it;
            return (*this);
        }

        iterator& operator++() // Prefix increment
        {
            ++it;
            return (*this);
        }

        iterator operator++(int) // Postfix increment
        {
            iterator temp = *this;
            ++it;
            return (temp);
        }

        iterator& operator--() // Prefix decrement
        {
            --it;
            return (*this);
        }

        iterator operator--(int) // Postfix decrement
        {
            iterator temp = *this;
            --it;
            return (temp);
        }

        bool operator==(const iterator& other) const
        {
            return (it == other.it);
        }

        bool operator!=(const iterator& other) const
        {
            return (it != other.it);
        }

        T& operator*()
        {
            return (*it);
        }
    };
    
    iterator begin()
    {
        return (iterator(std::stack<T>::c.begin()));
    }
    
    iterator end()
    {
        return (iterator(std::stack<T>::c.end()));
    }
};

#endif
