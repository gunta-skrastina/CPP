/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:33:29 by gskrasti          #+#    #+#             */
/*   Updated: 2023/04/14 10:43:42 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);
    ~Brain();
};

#endif
