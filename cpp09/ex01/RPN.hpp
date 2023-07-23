/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:45:13 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/23 08:40:49 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

# include <stack>
# include <string>
# include <iostream>
# include <sstream>
# include <cstdlib>

class RPN
{
private:
    std::stack<int>_numbers;
    bool _is_error;
public:
    RPN(std::string input);
    RPN(const RPN & other);
    RPN & operator=(const RPN & other);
    ~RPN();

    void calculate(std::string input);
    void error();
};

#endif
