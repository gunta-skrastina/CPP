/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:19:57 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/19 11:32:14 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <sstream>

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator result = std::find(container.begin(), container.end(), value);
    if (result == container.end())
    {
        std::stringstream error_message;
        error_message << "Value " << value << " not found in the container.";
        throw std::runtime_error(error_message.str());
    }
    return (result);
}

#endif
