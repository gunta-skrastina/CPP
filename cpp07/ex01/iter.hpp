/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:49:04 by gskrasti          #+#    #+#             */
/*   Updated: 2023/07/18 13:15:05 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename Funct>
void iter(T *array, unsigned int length, Funct funct)
{
    for (unsigned int i = 0; i < length; ++i)
    {
        funct(array[i]);
    }
}
