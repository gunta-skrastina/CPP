/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:46:55 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/23 08:31:07 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string input)
{
    calculate(input);
}

RPN::RPN(const RPN & other)
    : _numbers(other._numbers)
{

}

RPN & RPN::operator=(const RPN & other)
{
    if (this != & other)
        _numbers = other._numbers;
    return (*this);
}

RPN::~RPN()
{
    
}

void RPN::calculate(std::string input)
{
    std::stringstream ss(input);
    std::string token;

    if (input.find(32) == std::string::npos)
    {
        error();
        return;
    }

    while (ss >> token)
    {
        bool isNumeric = true;
        for (unsigned int i = 0; i < token.size(); i++)
        {
            if (!isdigit(token[i]))
            {
                isNumeric = false;
                break;
            }
        }
        
        if (isNumeric)
        {
            int num = std::atoi(token.c_str());
            _numbers.push(num);
        }
        else
        {
            if (_numbers.size() < 2 || token.size() != 1)
            {
                if (_numbers.size() > 1)
                {
                    while (_numbers.size() > 0)
                        _numbers.pop();
                }
                error();
                break;
            }
            
            int b = _numbers.top();
            _numbers.pop();
            int a = _numbers.top();
            _numbers.pop();
            
            switch (token[0])
            {
                case '+':
                    _numbers.push(a + b);
                    break;
                case '-':
                    _numbers.push(a - b);
                    break;
                case '*':
                    _numbers.push(a * b);
                    break;
                case '/':
                    if (b == 0)
                        error ();
                    else
                        _numbers.push(a / b);
                    break;
                default:
                    error();
                    break;
            }
        }
    }
    if (!_numbers.empty())
        std::cout << _numbers.top() << std::endl;
}

void RPN::error()
{
    std::cout << "ERROR" << std::endl;
    while (_numbers.size() > 0)
        _numbers.pop();
}
